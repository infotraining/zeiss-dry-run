#include "task_09.hpp"

#include <algorithm>
#include <numeric>

double total_in_stock_gross_value(const std::vector<Product>& products, double vatRate)
{
    // TODO: Użyj std::accumulate
    (void)products;
    (void)vatRate;
    return 0.0;
}

std::optional<Product> find_product_by_id(std::vector<Product>& products, int targetId)
{
    // TODO: Posortuj po id i wyszukaj przy pomocy std::lower_bound
    (void)products;
    (void)targetId;
    return std::nullopt;
}
