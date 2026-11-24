#pragma once

#include <map>
#include <string>

struct Order
{
    std::string customer_email;
    std::string customer_type; // "regular", "premium", "vip"
    std::string item;
    int quantity{};
    int unit_price_cents{};
    std::string payment_method; // "card", "paypal"
};

enum class OrderStatus
{
    Confirmed,
    InvalidOrder,
    OutOfStock,
    PaymentFailed
};

// God class: validation, pricing, stock management, payment, notification and logging
// are all hard-wired here. Adding a customer type or payment method means editing process().
class OrderProcessor
{
public:
    OrderProcessor();
    OrderStatus process(const Order& order);

private:
    std::map<std::string, int> stock_;
};
