#include <iostream>
#include "orario.h"

using namespace std;

int main()
{
    Orario test;
    cout << "sono un test di Ore: " << test.Ore() << endl;
    cout << "sono un test di Minuti: " << test.Minuti() << endl;
    cout << "sono un test di Secondi: " << test.Secondi() << endl;
    return 0;
}
