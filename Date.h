#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date
{
private:
    int month;
    int day;
    int year;

public:
    // Default date is January 1, 1900.
    // Invalid values also create the default date.
    Date(int m = 1, int d = 1, int y = 1900);

    // Changes the date or resets it if invalid.
    void setDate(int m, int d, int y);

    // Accessors
    int getMonth() const;
    int getDay() const;
    int getYear() const;

    // Leap-year functions
    bool isLeapYear() const;
    bool isLeapYear(int y) const;

    // Last-day functions
    int lastDay() const;
    int lastDay(int m, int y) const;

    // Date formats
    string format1() const;
    string format2() const;
    string format3() const;
};

#endif