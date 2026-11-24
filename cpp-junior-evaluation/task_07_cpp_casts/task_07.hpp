#pragma once
#include <vector>

class Employee {
public:
    virtual ~Employee() = default;
};

class Developer : public Employee {};
class Manager : public Employee {};

void legacy_print(char* str);

int count_developers(const std::vector<Employee*>& staff);
int truncate_to_int(double value);
void call_legacy_api(const char* text);
