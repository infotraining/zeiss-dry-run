# Zadanie 11: RAII – Zarządzanie zasobami i gwarancje wyjątków

## Polecenie
Zaimplementuj klasę `ScopeFlagGuard` realizującą wzorzec RAII:
1. Konstruktor `explicit ScopeFlagGuard(bool& flag)` ustawia `flag` na `true`.
2. Destruktor przywraca `flag` na `false` (nawet gdy opuszczamy zakres przez wyjątek!).
3. Zablokuj możliwość kopiowania i przenoszenia klasy (`= delete`).
4. Zaimplementuj funkcję `void execute_with_guard(bool& activeFlag, bool shouldThrow)`, która tworzy lokalny obiekt `ScopeFlagGuard`, a jeśli `shouldThrow == true`, rzuca `std::runtime_error("Failure")`.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Flaga pozostaje `true` po rzuceniu wyjątku.
- **1 pkt:** Działa przy normalnym wyjściu, ale brak zablokowania kopiowania (`= delete`).
- **2 pkt:** Poprawne RAII i blokada kopiowania.
- **3 pkt:** Czysta, idiomatyczna implementacja zgodna z zasadami bezpieczeństwa wyjątków.
