#ifndef ORARIO_H
#define ORARIO_H

#include <iostream>
using namespace std;

class Orario
{
public:
    /**
     N.B.
     Un campo dati statico può avere molteplici utilizzi (come ad esempio
     tener traccia della quantità di istanze generate a partire da una determinata classe)

     Inoltre, per poter accedere a questo campo dati, non è necessario specificare il namespace utilizzato
     (quindi è possibile omettere NOMECLASSE::)

     Un esempio è il seguente:
     class C {
     private:
        int dato;
     public:
        static int cont;
    };

    int C::cont = 0;

    C::C(int n) { cont++; dato = n; }

    int main() {
        C c1(1), c2(2);
        cout << C::cont; <-- stamperà 2, in quanto sono sono stati inizializzati due oggetti
    }
     */
    /**
     * @brief operator + -- Overload dell'operatore di somma
     * @return Orario
     */
    Orario operator+(Orario);

    /**
     * @brief operator - -- Overload dell'operatore di sottrazione
     * @return Orario
     */
    Orario operator-(Orario);

    /**
     * @brief operator == -- Overload dell'operatore di uguaglianza
     * @return boolean
     */
    bool operator==(Orario);

    /**
     * @brief operator > -- Overload dell'operatore maggiore
     * @return boolean
     */
    bool operator>(Orario);

    /**
     * @brief operator < -- Overload dell'operatore minore
     * @return boolean
     */
    bool operator<(Orario);
    /**
     * @brief Orario
     * Cosi facendo, ridefinisco il costruttore di default
     * con un costruttore di default custom.
     *
     * Si noti come, nel caso in cui non venga specificato alcun
     * costruttore, sia comunque disponibile un costruttore detto
     * standard privo di parametri.
     * Per i campi dati standard come int, double, etc.. il
     * costruttore standard li lascia indefiniti, mentre per i
     * tipi definiti dall'utente richiam il costruttore di default
     * corrispondente.
     *
     * Una volta definito almeno un costruttore (a 0 o n parametri)
     * il costruttore standard cessa di esistere e non è più possibile
     * richiamarlo in alcun modo
     */
    Orario(int o = 0, int m = 0, int s = 0);

    /**
     * @brief Ore - Selettore campo Ore
     * @return int
     */
    int Ore() const;
    /**
     * @brief Minuti - Selettore campo Minuti
     * @return int
     */
    int Minuti() const;
    /**
     * @brief Secondi - Selettore campo Secondi
     * @return int
     */
    int Secondi() const;

    Orario UnOraPiuTardi() const;

    void AvanzaUnOra();

    /**
     * @brief OraDiPranzo
     * Essendo un metodo statico, e quindi privo di oggetto di invocazione, non ha
     * bisogno di essere marchiato const (in quanto non può fare side effect su
     * di un oggetto di invocazione inesistente)
     * @return
     */
    static Orario OraDiPranzo();

private:
    int sec;
};

/**
  Overload esterno alla classe di un operatore
 */
ostream& operator<<(ostream& os, const Orario& o);

#endif // ORARIO_H
