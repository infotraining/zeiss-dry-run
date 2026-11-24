# Zadanie 9: Algorytmy STL (`std::accumulate`, `std::sort`, `std::lower_bound`)

## Polecenie
Dana jest struktura `Product { int id; double price; bool inStock; };`.
1. Zaimplementuj funkcję `double total_in_stock_gross_value(const std::vector<Product>& products, double vatRate)`, która za pomocą `std::accumulate` oblicza łączną wartość brutto (`price * (1.0 + vatRate)`) tylko dla produktów dostępnych (`inStock == true`).
2. Zaimplementuj funkcję `const Product* find_product_by_id(std::vector<Product>& products, int targetId)`, która sortuje wektor rosnąco po `id` (używając `std::sort`), a następnie wyszukuje produkt za pomocą `std::lower_bound` i zwraca wskaźnik na niego (lub `nullptr`, jeśli nie istnieje).

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Błędny typ akumulatora (np. `0` zamiast `0.0` obcinające ułamki) lub brak sortowania przed `lower_bound`.
- **1 pkt:** Zaimplementowane surowymi pętlami zamiast algorytmów STL.
- **2 pkt:** Użycie algorytmów STL, ale brak sprawdzenia `it->id == targetId` po `lower_bound`.
- **3 pkt:** Pełne, poprawne użycie `std::accumulate`, `std::sort` i `std::lower_bound`.
