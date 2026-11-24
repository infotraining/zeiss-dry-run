# Zadanie 10: Struktury danych (Lista jednokierunkowa i Stos)

## Polecenie
1. Zaimplementuj funkcję `ListNode* reverse_list(ListNode* head)`, która odwraca listę jednokierunkową **w miejscu** (złożoność pamięciowa $O(1)$, czasowa $O(n)$) i zwraca nowy wskaźnik na początek listy.
2. Zaimplementuj funkcję `bool are_brackets_balanced(const std::string& expr)`, która za pomocą `std::stack<char>` sprawdza, czy nawiasy `()`, `{}`, `[]` w wyrażeniu są poprawnie zagnieżdżone i domknięte.

## Kryteria oceny (0-3 pkt)
- **0 pkt:** Naruszenie ochrony pamięci (`nullptr` dereference, `.top()` na pustym stosie).
- **1 pkt:** Działające jedno z dwóch zadań.
- **2 pkt:** Poprawne oba zadania, ale alokacja dodatkowej pamięci przy odwracaniu listy.
- **3 pkt:** Odwracanie listy in-place $O(1)$ pamięci oraz pełna walidacja nawiasów.
