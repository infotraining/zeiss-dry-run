#include "task_11.hpp"

#include <iostream>

OrderProcessor::OrderProcessor()
    : stock_{{"book", 10}, {"pen", 100}, {"laptop", 2}}
{
}

OrderStatus OrderProcessor::process(const Order& order)
{
    std::clog << "[LOG] processing order for " << order.customer_email << '\n';

    if (order.quantity <= 0 || order.unit_price_cents < 0 || order.customer_email.empty())
    {
        std::clog << "[LOG] invalid order\n";
        return OrderStatus::InvalidOrder;
    }

    long long total = static_cast<long long>(order.quantity) * order.unit_price_cents;
    if (order.customer_type == "premium")
        total = total * 90 / 100;
    else if (order.customer_type == "vip")
        total = total * 80 / 100;
    else if (order.customer_type != "regular")
        return OrderStatus::InvalidOrder;

    auto it = stock_.find(order.item);
    if (it == stock_.end() || it->second < order.quantity)
    {
        std::clog << "[LOG] out of stock: " << order.item << '\n';
        return OrderStatus::OutOfStock;
    }
    it->second -= order.quantity;

    bool paid = false;
    if (order.payment_method == "card")
    {
        std::cout << "Charging card: " << total << " cents\n";
        paid = total <= 100000;
    }
    else if (order.payment_method == "paypal")
    {
        std::cout << "Charging PayPal: " << total << " cents\n";
        paid = true;
    }

    if (!paid)
    {
        it->second += order.quantity;
        std::clog << "[LOG] payment failed\n";
        return OrderStatus::PaymentFailed;
    }

    std::cout << "Sending e-mail to " << order.customer_email << ": order of " << order.quantity
              << " x " << order.item << " confirmed\n";
    std::clog << "[LOG] order confirmed\n";
    return OrderStatus::Confirmed;
}
