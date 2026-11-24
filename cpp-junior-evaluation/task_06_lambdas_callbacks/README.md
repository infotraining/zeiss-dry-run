# Zadanie 6: Callbacki i wyrażenia lambda

## Polecenie
1. Zaimplementuj funkcję `filter_above_threshold(const std::vector<int>& data, int threshold)`, która wewnątrz wykorzystuje wyrażenie lambda przechwytujące `threshold` przez wartość i zwraca nowy wektor z elementami ściśle większymi niż `threshold`.
2. Zaimplementuj klasę `EventDispatcher`:
   - `void subscribe(std::function<void(int)> callback)` – rejestruje callback.
   - `void emit(int eventCode) const` – wywołuje wszystkie zarejestrowane callbacki w kolejności rejestracji.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Błędy składniowe lambd lub wiszące referencje.
- **1 pkt:** Działające filtrowanie, ale brak obsługi `std::function`.
- **2 pkt:** Poprawna implementacja obu wymagań.
- **3 pkt:** Czysty, idiomatyczny kod, bezpieczne wywołanie callbacków (sprawdzenie `if (cb)`).
