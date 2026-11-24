#include "task_04.hpp"
#include <utility>

UserProfile create_profile(std::string username, std::vector<int> scores) {
    // TODO: Utwórz i zwróć UserProfile bez zbędnych kopii
    return UserProfile{};
}

ValueCategory classify_value_category(int& x) {
    (void)x;
    return ValueCategory::LValue;
}

ValueCategory classify_value_category(int&& x) {
    (void)x;
    return ValueCategory::RValue;
}

ValueCategory perfect_forward_test(int& x) {
    return ValueCategory::ToDo; // call classify_value_category forwarding the argument correctly
}

ValueCategory perfect_forward_test(int&& x) {
    return ValueCategory::ToDo; // call classify_value_category forwarding the argument correctly
}