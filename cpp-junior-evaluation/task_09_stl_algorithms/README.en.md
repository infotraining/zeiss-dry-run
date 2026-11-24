# Task 9: STL Algorithms (`std::accumulate`, `std::sort`, `std::lower_bound`)

## Objective

Given structure `Product { int id; double price; bool inStock; }`:

1. Implement `double total_in_stock_gross_value(const std::vector<Product>& products, double vatRate)`:
   - Uses `std::accumulate` to calculate total gross value (`price * (1.0 + vatRate)`)
   - Only for products available (`inStock == true`)

2. Implement `const Product* find_product_by_id(std::vector<Product>& products, int targetId)`:
   - Sorts vector in ascending order by `id` (using `std::sort`)
   - Then searches for the product using `std::lower_bound`
   - Returns pointer to the product (or `nullptr` if not found)

## Implementation Requirements

- Use STL algorithms correctly
- Use correct accumulator types
- Sort before binary search
- Verify result validity after `lower_bound`

## Evaluation Criteria (0-3 points)

- **0 points:** Wrong accumulator type (e.g., `0` instead of `0.0` truncating decimals) or missing sort before `lower_bound`
- **1 point:** Implemented using raw loops instead of STL algorithms
- **2 points:** Use of STL algorithms, but missing `it->id == targetId` check after `lower_bound`
- **3 points:** Complete, correct use of `std::accumulate`, `std::sort`, and `std::lower_bound`
