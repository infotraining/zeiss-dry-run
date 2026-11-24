# Task 10: Data Structures (Linked List and Stack)

## Objective

1. Implement `ListNode* reverse_list(ListNode* head)`:
   - Reverses a singly linked list **in-place** (space complexity O(1), time complexity O(n))
   - Returns pointer to the new head of the reversed list

2. Implement `bool are_brackets_balanced(const std::string& expr)`:
   - Uses `std::stack<char>` to check if brackets `()`, `{}`, `[]` in expression are properly nested and closed

## Implementation Requirements

- Reverse linked list without additional memory allocation
- Use stack data structure for bracket matching
- Handle edge cases properly
- Protect against undefined behavior (nullptr dereference, `.top()` on empty stack)

## Evaluation Criteria (0-3 points)

- **0 points:** Memory safety violation (nullptr dereference, `.top()` on empty stack)
- **1 point:** One of two tasks implemented correctly
- **2 points:** Both tasks correct, but additional memory allocation in list reversal
- **3 points:** In-place list reversal with O(1) space and complete bracket validation
