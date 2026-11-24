#include "task_12.hpp"

#include <stdexcept>

SimpleDate::SimpleDate(int day, int month, int year)
    : day_(day)
    , month_(month)
    , year_(year)
{
    // TODO: Dodaj walidację niezmienników
}

void SimpleDate::set_month(int month)
{
    // TODO: Dodaj walidację miesiąca
    month_ = month;
}

NotificationService::NotificationService()
{ }

void NotificationService::send_alert(const std::string& user)
{
    // TODO: Zaloguj wysłanie alertu
    (void)user;
}
