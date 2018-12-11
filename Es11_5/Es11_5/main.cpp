/*
 * Definire una classe "Data" i cui oggetti rappresentano
 * una data con giorno della settimana (lun, mar, ..).
 * La classe Data deve rendere disponibili:
 * - opportuni costruttori
 * - metodi di selezione per ottenere giorno della settimana,
 *   giorno, mese, anno di una data data
 * - operatore di output
 * - operatore di uguaglianza
 * - operatore di relazione < che ignori il giorno della settimana
*/

#include <iostream>
#include "data.h"

using std::cout;

int main() {
    Data d("lun", 21, 10, 2002);
    Data e("mer", 12, 11, 1993);

    cout << d;
    cout << (d < e) << " " << (e == d) << endl;
}
