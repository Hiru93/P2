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
    cout << endl;
    cout << endl;
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
    Orario t = 5 + 2 * 2; //Equivalente di t = Orario(5+2*2, 0, 0);
    cout << "Primo punto della situazione con t: " << t.Ore() << ", " << t.Minuti() << endl;
    Orario x(12, 45); //Equivalente di x = Orario(12, 45, 0);
    cout << "Primo punto della situazione con x: " << x.Ore() << ", " << x.Minuti() << endl;
    Orario a; //Equivalente di a = Orario(0, 0, 0);
    cout << "Primo punto della situazione con a: " << a.Ore() << ", " << a.Minuti() << endl;
    Orario b(7); //Equivalente di b = Orario(7, 0, 0);
    cout << "Primo punto della situazione con b: " << b.Ore() << ", " << b.Minuti() << endl;
    cout << endl;
    cout << endl;

    Orario mezzanotte; //Equivalente a mezzanotte = Orario(0, 0, 0);
    cout << "Test sui side effect: " << mezzanotte.Ore() << endl; //Stamperà 0
    Orario adesso(15); //Equivale a adesso = Orario(15, 0, 0);
    cout << "Test sui side effect: " << adesso.Ore() << endl; //Stamperà 15
    adesso = mezzanotte.UnOraPiuTardi();
    cout << "Test sui side effect: " << adesso.Ore() << endl; //Stamperà 1
    cout << "Test sui side effect: " << mezzanotte.Ore() << endl; //Stamperà 0
    //La cosa è dovuta al fatto che il metodo "UnOraPiuTardi non fa alcun tipo di side effect
    mezzanotte.AvanzaUnOra();
    cout << "Test sui side effect: " << mezzanotte.Ore() << endl; //Stamperà 1
    //La cosa è dovuta al fatto che il metodo AvnzaUnOra fa side effect sul campo privato sec
    cout << endl;
    cout << endl;

    const Orario LE_DUE(14);
    const Orario LE_QUATTRO(16);
    /*Quanto definito prima rappresenta due oggetti IMUTABILI e sulla quale è possibile
     * richiamare solo metodi costanti e che non prevedano quindi side effect.
     *
     * Inoltre, anche qualunque tipo di assegnazione rappresenta un operazione illegale
     * e verrebbe bloccata dal compilatore.
     *
     * LE_DUE.sec = 13; <-- SBAGLIATO
     *
     * cout << LE_DUE.UnOraPiuTardi() << endl; <-- CONCESSO
    */
    cout << endl;
    cout << endl;

    cout << "Si pranza alle: " << Orario::OraDiPranzo().Ore() << " e " << Orario::OraDiPranzo().Minuti() << " minuti" << endl;
    /*Quanto scritto sopra indica il modo corretto per accedere ad un metodo statico di classe
     * ovvero antecedendo al nome del metodo quello della classe dentro la quale è stato definito
    */
    return 0;
}
