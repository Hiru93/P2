#include "orario.h"

/**
 * @brief Orario::Orario -- Il costruttore, sebbene unico, funge da costruttore ad 1, 2 e 3 parametri
 * @param o -- Ore
 * @param m -- Minuti
 * @param s -- Secondi
 */
Orario::Orario(int o, int m, int s) {
    if (o < 0 || o > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
        sec = 0;
    } else {
        sec = o * 3600 + m * 60 + s;
    }
};

int Orario::Ore() { return sec / 3600; }

int Orario::Minuti() { return (sec / 60) % 60; }

int Orario::Secondi() { return sec % 60; }
