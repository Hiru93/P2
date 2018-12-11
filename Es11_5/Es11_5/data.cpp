#include "data.h"

Data::Data(string lg, int g, int m, int a): g_label(lg), g(g), m(m), a(a) { }

string Data::Label_giorno() const { return g_label; }

int Data::get_giorno() const { return g; }

int Data::get_mese() const { return m; }

int Data::get_anno() const { return a; }

bool Data::operator==(const Data& obj) const {
    return ((g_label == obj.g_label) &&
           (g == obj.g) &&
           (m == obj.m) &&
           (a == obj.a));
}

bool Data::operator<(const Data& obj) const {
    if(obj.a > a) { return true; }
    if(obj.a == a && obj.m > m) { return true; }
    if(obj.a == a && obj.m == m && obj.g > g) { return true; }
    return false;
}

ostream& operator<<(ostream& os, const Data& obj) {
    return os << obj.Label_giorno() << "/"
              << obj.get_giorno() << "/"
              << obj.get_mese() << "/"
              << obj.get_anno() << endl;
}
