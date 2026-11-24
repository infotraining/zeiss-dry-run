#pragma once
#include <string>

class SimpleDate
{
public:
    SimpleDate(int day, int month, int year);
    void set_month(int month);

    int day() const { return day_; }
    int month() const { return month_; }
    int year() const { return year_; }

private:
    int day_;
    int month_;
    int year_;
};

class NotificationService
{
public:
    explicit NotificationService();
    void send_alert(const std::string& user);
};
