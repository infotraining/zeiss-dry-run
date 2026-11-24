# Zadanie 4: Semantyka wartości i referencji

## Polecenie
1. Zaimplementuj strukturę `UserProfile` oraz funkcję `create_profile`:
   - `UserProfile` ma pola: `std::string username` oraz `std::vector<int> scores`.
   - Funkcję `UserProfile create_profile(std::string username, std::vector<int> scores)`
2. Określ kategorie wartości w testach:
   - `ValueCategory classify_value_category(int& x)` zwraca `ValueCategory::LValue`.
   - `ValueCategory classify_value_category(int&& x)` zwraca `ValueCategory::RValue`.
3. Zaimplementuj funkcję `ValueCategory perfect_forward_test(int&& x)` oraz `ValueCategory perfect_forward_test(int& x)`, która powinna poprawnie przekazywać argument do `classify_value_category` i zwracać odpowiednią kategorię wartości.
4. Zaimplementuj `perfect_forward_test` jako szablon, który wykorzystuje perfect forwarding do przekazywania argumentu do `classify_value_category`.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Błędne zrozumienie `lvalue`/`rvalue` lub brak kompilacji.
- **1 pkt:** Poprawne przeładowania, ale brak użycia `std::move` w `create_profile`.
- **2 pkt:** Poprawne `std::move`, drobne nieścisłości w kategoriach wartości.
- **3 pkt:** Pełne zrozumienie kategorii wartości i optymalizacji przekazywania parametrów.
