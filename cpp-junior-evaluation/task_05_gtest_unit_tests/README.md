# Zadanie 5: Pisanie testów jednostkowych (Google Test)

## Polecenie
Napisz klasę `BankAccount` oraz zestaw testów jednostkowych w pliku z testami używając TDD.

Opis wymagań:
- Klasa `BankAccount` powinna posiadać konstruktor przyjmujący początkowe saldo.
- Metodę `deposit(double amount)` do wpłacania środków.
- Metodę `withdraw(double amount)` do wypłacania środków.
- Metodę `transfer(BankAccount& to, double amount)` do przelewania środków między kontami.
- Metodę `balance()` zwracającą aktualne saldo.
- Wpłata lub wypłata ujemnej kwoty powinna rzucać `std::invalid_argument`.
- Wypłata większej kwoty niż saldo powinna rzucać `std::runtime_error`.


## Kryteria oceny (0-3 pkt)
- **0 pkt:** Testy nie kompilują się lub nie sprawdzają wyjątków.
- **1 pkt:** Zwykłe makra `TEST` bez `TEST_F` lub brak sprawdzenia wszystkich ścieżek błędów.
- **2 pkt:** Poprawne `TEST_F`, ale użycie `EXPECT_EQ` zamiast `EXPECT_DOUBLE_EQ` dla liczb zmiennoprzecinkowych.
- **3 pkt:** Kompletny zestaw `TEST_F`, `EXPECT_DOUBLE_EQ`, `EXPECT_THROW` oraz weryfikacja spójności stanu po wyjątku.
