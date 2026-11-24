#pragma once
#include <string>
#include <vector>

struct UserProfile
{
    std::string username;
    std::vector<int> scores;
};

UserProfile create_profile(std::string username, std::vector<int> scores);

enum class ValueCategory : uint8_t
{
    LValue = 1,
    RValue = 2,
    ToDo = 255
};

ValueCategory classify_value_category(int& x);
ValueCategory classify_value_category(int&& x);

ValueCategory perfect_forward_test(int& x);
ValueCategory perfect_forward_test(int&& x);