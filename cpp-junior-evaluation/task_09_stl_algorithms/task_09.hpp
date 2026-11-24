#pragma once
#include <optional>
#include <vector>

struct Product
{
    int id;
    double price;
    bool inStock;
};

double total_in_stock_gross_value(const std::vector<Product>& products, double vatRate);

std::optional<Product> find_product_by_id(std::vector<Product>& products, int targetId);
