# Zadanie 1: Polimorfizm i wirtualny destruktor

## Polecenie
Zaimplementuj hierarchię klas reprezentujących figury geometryczne:
1. Abstrakcyjna klasa bazowa `Shape` posiadająca:
   - czysto wirtualną metodę `double area() const = 0;`.
2. Klasa pochodna `Circle` przyjmująca w konstruktorze `double radius`
3. Klasa pochodna `Rectangle` przyjmująca w konstruktorze `double width, double height`.
4. Funkcja `double total_area(/* wektor obiektów typu Shape */)`, która sumuje pola wszystkich figur w wektorze.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Brak kompilacji, brak wirtualnego destruktora lub wycieki pamięci.
- **1 pkt:** Działające klasy, ale brak `override` lub `const` przy `area()`.
- **2 pkt:** Poprawna implementacja i wirtualny destruktor.
- **3 pkt:** Idiomatyczny kod Modern C++ (`override`, `const`, użycie smart pointerów, bezpieczna obsługa `nullptr`).
