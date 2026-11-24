# Zadanie 12: Object-Oriented Programming (Enkapsulacja i Kompozycja)

## Polecenie
1. **Enkapsulacja i niezmienniki:** Zaimplementuj klasę `SimpleDate(int day, int month, int year)`:
   - Waliduj poprawność daty w konstruktorze oraz metodzie `set_month(int month)`: `year >= 1900`, `1 <= month <= 12`, `1 <= day <= 31`. W razie błędu rzuć `std::invalid_argument`, nie zmieniając stanu obiektu.
2. **Mockowanie zależności:** Napisz test jednostkowy, który zweryfikuje, czy `NotificationService.send_alert()` wywołuje metodę `log()` na przekazanym loggerze z odpowiednim komunikatem.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Publiczne pola bez walidacji lub użycie dziedziczenia zamiast kompozycji.
- **1 pkt:** Walidacja tylko w konstruktorze, brak walidacji w `set_month()`.
- **2 pkt:** Poprawna enkapsulacja i wstrzykiwanie zależności przez interfejs.
- **3 pkt:** Pełna ochrona niezmienników (silna gwarancja wyjątków) oraz czysta kompozycja.
