#include "Date.h"
#include <sstream>

using namespace std;

// Constructor
Date::Date(int m, int d, int y)
{
    setDate(m, d, y);
}

// Set and validate the date
void Date::setDate(int m, int d, int y)
{
    if (y >= 1 && m >= 1 && m <= 12 &&
        d >= 1 && d <= lastDay(m, y))
    {
        month = m;
        day = d;
        year = y;
    }
    else
    {
        month = 1;
        day = 1;
        year = 1900;
    }
}

// Accessors
int Date::getMonth() const
{
    return month;
}

int Date::getDay() const
{
    return day;
}

int Date::getYear() const
{
    return year;
}

// Check the object's year
bool Date::isLeapYear() const
{
    return isLeapYear(year);
}

// Check a supplied year
bool Date::isLeapYear(int y) const
{
    return (y % 400 == 0) ||
        (y % 4 == 0 && y % 100 != 0);
}

// Last day of the object's month
int Date::lastDay() const
{
    return lastDay(month, year);
}

// Last day of a supplied month and year
int Date::lastDay(int m, int y) const
{
    if (m < 1 || m > 12 || y < 1)
        return 0;

    if (m == 2)
    {
        if (isLeapYear(y))
            return 29;

        return 28;
    }

    if (m == 4 || m == 6 || m == 9 || m == 11)
        return 30;

    return 31;
}

// Format: MM/DD/YYYY
string Date::format1() const
{
    ostringstream output;

    if (month < 10)
        output << "0";

    output << month << "/";

    if (day < 10)
        output << "0";

    output << day << "/" << year;

    return output.str();
}

// Format: Month DD, YYYY
string Date::format2() const
{
    const string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    ostringstream output;

    output << months[month - 1] << " "
        << day << ", " << year;

    return output.str();
}

// Format: DD Month YYYY
string Date::format3() const
{
    const string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    ostringstream output;

    output << day << " " << months[month - 1]
        << " " << year;

    return output.str();
}