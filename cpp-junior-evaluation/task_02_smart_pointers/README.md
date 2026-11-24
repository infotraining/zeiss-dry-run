# Zadanie 2: Smart Pointers (`std::unique_ptr` i `std::weak_ptr`)

## Polecenie
1. Zaimplementuj klasę `PacketBuffer`, która alokuje tablicę `uint8_t` o podanym rozmiarze (`size`) i wypełnia ją zerami.
   - Metoda `size_t size() const` zwraca rozmiar bufora.
   - Metoda `uint8_t* release_buffer()` przekazuje własność bufora na zewnątrz (za pomocą `std::move`), zerując jednocześnie wewnętrzny rozmiar do `0`.
   - Popraw implementację używając smart pointerów zamiast natywnego wskaźnika.
2. Rozwiąż problem cyklicznej referencji między klasami `NodeA` i `NodeB`:
   - Metoda `bool NodeB::has_valid_prev() const` zwraca `true`, jeśli obiekt `NodeA` nadal istnieje.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Wycieki pamięci lub błędy kompilacji.
- **1 pkt:** Poprawne użycie `unique_ptr<T[]>`, ale brak rozwiązania cyklu `weak_ptr`.
- **2 pkt:** Poprawne oba elementy, brak zerowania rozmiaru po `release_buffer()`.
- **3 pkt:** Pełna, bezpieczna implementacja z użyciem `std::move` i `.expired()` / `.lock()`.
