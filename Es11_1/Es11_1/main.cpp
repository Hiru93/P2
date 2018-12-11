/**
 * Definire una classe "IntMod" i cui oggetti rappresentano numeri interi
 * modulo un dato numero.
 * Devono essere dispnibili gli operatori di:
 * - somma
 * - moltiplicazione
 *
 * tra oggetti di tipo IntMod.
 * Definire inoltre opportuni convertitori di tipo affinchè gli oggetti
 * di IntMod siano liberamente utilizzabili assieme ad espressioni di tipo primitivo
 * int e valga la seguente condizione: "quando in una espressione compaiono sia
 * espressioni intere che oggetti di IntMod, il tipo dell'espressione dovrà essere intero.
 * */

#include <iostream>
#include "intmod.h"

using std::cout;
using std::endl;

int main() {
    IntMod::set_modulo(4);
    IntMod a(3), b(2);
    cout << a + b << endl;          //Stampa 1
    cout << a * b << endl;          //Stampa 2
    cout << IntMod(4) + a << endl;  //Stampa 3
    cout << a + 4 << endl;          //Stampa 7
}
