#include "date.h"

date::date(int d, int m, int y){
    day = !d ? 1 : d;
    month = !m ? 1 : m;
    year = y < 1993 ? 1993 : y;
};

int date::getDay() const { return day; }

int date::getMonth() const { return month; }

int date::getYear() const { return year; }

ostream& operator<<(ostream& os, const date& d) {
    return os << d.getDay() << "/" << d.getMonth() << "/" << d.getYear();
}
