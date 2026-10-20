#include <iostream>
#include "Date.h"

using namespace std;

int main()
{
    cout << "DATE CLASS PROJECT" << endl;
    cout << "------------------" << endl;

    // Test 1: Default date
    Date date1;

    cout << "\nTest 1: Default Date" << endl;
    cout << date1.format1() << endl;
    cout << date1.format2() << endl;
    cout << date1.format3() << endl;

    // Test 2: Normal date and all formats
    Date date2(12, 25, 2021);

    cout << "\nTest 2: Normal Date" << endl;
    cout << date2.format1() << endl;
    cout << date2.format2() << endl;
    cout << date2.format3() << endl;

    // Test 3: First day of a month
    Date date3(1, 1, 2025);

    cout << "\nTest 3: First Day of Month" << endl;
    cout << date3.format2() << endl;

    // Test 4: Last day of a month
    Date date4(4, 30, 2025);

    cout << "\nTest 4: Last Day of April" << endl;
    cout << date4.format2() << endl;

    // Test 5: Leap year
    Date date5(2, 29, 2024);

    cout << "\nTest 5: Leap Year Date" << endl;
    cout << date5.format1() << endl;
    cout << "Leap year: "
        << (date5.isLeapYear() ? "Yes" : "No") << endl;

    // Test 6: Invalid date
    Date date6(4, 31, 2023);

    cout << "\nTest 6: Invalid Date" << endl;
    cout << date6.format1() << endl;

    // Test 7: Invalid setDate
    date2.setDate(13, 10, 2025);

    cout << "\nTest 7: Invalid setDate" << endl;
    cout << date2.format1() << endl;

    // Test 8: Leap-year overload
    cout << "\nTest 8: Leap-Year Function" << endl;
    cout << "Year 2000: "
        << (date1.isLeapYear(2000) ? "Yes" : "No") << endl;

    cout << "Year 1900: "
        << (date1.isLeapYear(1900) ? "Yes" : "No") << endl;

    // Test 9: Last-day overload
    cout << "\nTest 9: Last-Day Function" << endl;
    cout << "February 2024: "
        << date1.lastDay(2, 2024) << endl;

    cout << "February 2023: "
        << date1.lastDay(2, 2023) << endl;

    cout << "December 2025: "
        << date4.lastDay(12, 2025) << endl;

    // Test 10: Accessors
    cout << "\nTest 10: Accessors" << endl;

    Date date7(7, 4, 2025);

    cout << "Month: " << date7.getMonth() << endl;
    cout << "Day: " << date7.getDay() << endl;
    cout << "Year: " << date7.getYear() << endl;

    cout << "\nTesting finished." << endl;

    return 0;
}