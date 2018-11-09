#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class date
{
public:
    date(int d = 1, int m = 1, int y = 1993);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
private:
    int day;
    int month;
    int year;
};

ostream& operator<<(ostream& os, const date& d);

#endif // DATE_H
