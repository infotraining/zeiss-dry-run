# Repozytorium Ewaluacyjne C++ Junior (CMake + Google Test)

Repozytorium zawiera **12 praktycznych zadań** (po jednym reprezentatywnym zadaniu z każdego bloku tematycznego systemu ewaluacji).

## Struktura każdego zadania
Każdy podkatalog (`task_XX_*`) zawiera:
* `README.md` – treść zadania, wymagania oraz kryteria oceny.
* `starter.hpp` / `starter.cpp` – kod wyjściowy do uzupełnienia przez kandydata.
* `solution.hpp` / `solution.cpp` – wzorcowe rozwiązanie dla rekrutera.
* `test.cpp` – zestaw testów jednostkowych Google Test weryfikujących poprawność implementacji.
* `CMakeLists.txt` – konfiguracja budowania dla danego zadania.

## Jak budować i uruchamiać testy

### 1. Tryb kandydata (kod startowy)
```bash
mkdir build && cd build
cmake .. -DBUILD_SOLUTIONS=OFF
cmake --build .
ctest --output-on-failure
```

### 2. Tryb rekrutera (weryfikacja rozwiązań wzorcowych)
```bash
mkdir build_sol && cd build_sol
cmake .. -DBUILD_SOLUTIONS=ON
cmake --build .
ctest --output-on-failure
```
