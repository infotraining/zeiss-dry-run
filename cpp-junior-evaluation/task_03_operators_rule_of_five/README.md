# Zadanie 3: Klasy, operatory i Reguła Pięciu (Rule of Five)

## Polecenie
Zaimplementuj klasę `IntArray` zarządzającą dynamiczną tablicą `int*` o zadanym rozmiarze:
1. Konstruktor `explicit IntArray(size_t size)` (wypełnia tablicę zerami).
2. Destruktor zwalniający pamięć.
3. Konstruktor kopiujący i kopiujący operator przypisania (głęboka kopia, ochrona przed samoprzypisaniem `this == &other`).
4. Konstruktor przenoszący i przenoszący operator przypisania.
5. Operator indeksowania.
6. Operator porównania `bool operator==(const IntArray& other) const`.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Double free, wyciek pamięci lub płytka kopia.
- **1 pkt:** Zaimplementowana tylko Reguła Trzech bez semantyki przenoszenia.
- **2 pkt:** Poprawna Reguła Pięciu, ale brak ochrony przed samoprzypisaniem lub `noexcept`.
- **3 pkt:** Pełna, idiomatyczna implementacja z obsługą `const` i `noexcept`.
