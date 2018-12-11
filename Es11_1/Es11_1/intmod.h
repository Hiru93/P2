#ifndef INTMOD_H
#define INTMOD_H


class IntMod
{
public:
    /* Impedisce la conversione implicita int -> IntMod inibendo il richiamo
       del costruttore ad un parametro quando si cerca di trasformare un int
       in un oggetto di tipo IntMod
       Il tutto si traduce con l'impossibilità di fare
       IntMod a = 12;
       in quanto si sta tentando di assegnare un intero ad un oggetto di
       tipo IntMod.
    */
    explicit IntMod(int n=0);

    /*
     * Caso contrario è invece quello del convertitore di tipo implicito.
     * In questo modo (definendo tramite keyword operator il costruttore)
     * si indica una conversione implicita dal tipo definito dalla classe
     * al tipo T specifivato (in questo caso da IntMod -> int)
    */
    operator int() const;

    /*
     * set_modulo, essendo un metodo che influenza tutti gli oggetti
     * istanziati dalla classe IntMod deve venir marchiato statico
    */
    static void set_modulo(int);

    /*
     * l'overload degli operatori di somma e prodotto non producono
     * side-effect di alcun tipo, restituendo invece un temporaneo
     * anonimo contenente il risultato dell'operazione
    */
    IntMod operator+(const IntMod&) const;
    IntMod operator*(const IntMod&) const;

private:
    static int modulo;
    int val;
};

#endif // INTMOD_H
