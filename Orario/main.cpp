#include <iostream>
#include "orario.h"

using namespace std;

int main()
{
    Orario vuoto;
    cout << "sono vuoto.Ore: " << vuoto.Ore() << endl;
    cout << "sono vuoto.Minuti: " << vuoto.Minuti() << endl;
    cout << "sono vuoto.Secondi: " << vuoto.Secondi() << endl;
    Orario doppio(1, 2);
    cout << "sono doppio.Ore: " << doppio.Ore() << endl;
    cout << "sono doppio.Minuti: " << doppio.Minuti() << endl;
    cout << "sono doppio.Secondi: " << doppio.Secondi() << endl;
    Orario triplo(12, 41, 32);
    cout << "sono triplo.Ore: " << triplo.Ore() << endl;
    cout << "sono triplo.Minuti: " << triplo.Minuti() << endl;
    cout << "sono triplo.Secondi: " << triplo.Secondi() << endl;
    /**
      Orario o = Orario(1, 2, 3)

      Con quanto riportato sopra, creo un temporaneo anonimo
      che richiama un costruttore a 3 parametri e, non appena avviene
      l'assegnazione, cessa di esistere, lasciando spazio all'oggetto o

      Si noti come inoltre, il costruttore ad un parametro (non presente
      nell'esempio) possa funzionare come un convertitore di tipo implicito
      nel caso seguente

      Orario x;
      x = 8;

      In questo modo, durante l'assegnazione della seconda riga, x si
      aspetterebbe un oggetto di tipo Orario, quando invece gli viene dato
      un intero; per questo motivo viene invocato implicitamente il
      costruttore ad un parametro.*
      */
    Orario check;
    check = 6; //Equivalente di check = Orario(6, 0, 0);
    cout << "Primo punto della situazione: " << check.Ore() << endl;
    cout << "Primo punto della situazione: " << check.Minuti() << endl;
    cout << "Primo punto della situazione: " << check.Secondi() << endl;
    return 0;
}
