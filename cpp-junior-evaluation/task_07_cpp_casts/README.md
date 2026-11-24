# Zadanie 7: Rzutowania w C++ (`static_cast`, `dynamic_cast`, `const_cast`)

## Polecenie
Zaimplementuj trzy funkcje wykorzystujące odpowiednie operatory rzutowania C++ (bez rzutowań w stylu C!):
1. `int count_developers(const std::vector<Employee*>& staff)` – zlicza, ile wskaźników w wektorze faktycznie wskazuje na obiekty typu `Developer` (użyj `dynamic_cast`).
2. `int truncate_to_int(double value)` – jawnie konwertuje `double` na `int` przy użyciu `static_cast`.
3. `void call_legacy_api(const char* text)` – przekazuje `text` do funkcji C `legacy_print(char* str)`, która nie modyfikuje napisu, ale przyjmuje nie-const `char*` (użyj `const_cast`).

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Użycie C-style cast `(Type)x` lub niezdefiniowane zachowanie.
- **1 pkt:** Poprawne jedno lub dwa rzutowania.
- **2 pkt:** Poprawne wszystkie trzy rzutowania, brak sprawdzenia `nullptr` przed `dynamic_cast`.
- **3 pkt:** Wzorcowe użycie nazwanych operatorów rzutowania C++.
