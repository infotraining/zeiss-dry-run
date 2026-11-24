#include "task_11.hpp"

#include <stdexcept>

ScopeFlagGuard::ScopeFlagGuard(bool& flag)
    : flag_(flag)
{
    // TODO: Ustaw flagę na true
}

ScopeFlagGuard::~ScopeFlagGuard()
{
    // TODO: Przywróć flagę na false
}

void execute_with_guard(bool& activeFlag, bool shouldThrow)
{
    // TODO: Użyj ScopeFlagGuard i rzuć wyjątek jeśli shouldThrow == true
    (void)activeFlag;
    (void)shouldThrow;
}
