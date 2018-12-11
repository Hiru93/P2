#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <string>

using std::string;
using std::ostream;
using std::endl;

class Data
{
public:
    /*
     * Metodo costruttore
    */
    Data(string = "", int = 1, int = 1, int = 0);

    /*
     * Getter e Setter
    */
    string Label_giorno() const;
    int get_giorno() const;
    int get_mese() const;
    int get_anno() const;

    /*
     * Overload di operatori
    */
    bool operator==(const Data&) const;
    bool operator<(const Data&) const;
    void aggiungi_uno();

private:
    int g, m, a;
    string g_label;
};

ostream& operator<<(ostream&, const Data&);

#endif // DATA_H
