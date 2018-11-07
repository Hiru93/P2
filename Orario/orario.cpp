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

/**
 * @brief Orario::Ore -- restituisce le ore
 * @return int
 */
int Orario::Ore() const { return sec / 3600; }

/**
 * @brief Orario::Minuti -- restituisce i minuti
 * @return int
 */
int Orario::Minuti() const { return (sec / 60) % 60; }

/**
 * @brief Orario::Secondi -- restituisce i secondi
 * @return int
 */
int Orario::Secondi() const { return sec % 60; }

Orario Orario::UnOraPiuTardi() const {
    Orario aux;
    aux.sec = (sec + 3600) % 86400;
    return aux;
}

void Orario::AvanzaUnOra() {
    sec = (sec + 3600) % 86400;
}

Orario Orario::OraDiPranzo() {
    return Orario(13);
}

Orario Orario::operator+(Orario o) {
    Orario aux;
    aux.sec = (sec + o.sec) % 86400;
    return aux;
}

Orario Orario::operator-(Orario o) {
    Orario aux;
    aux.sec = (sec - o.sec) % 86400;
    return aux;
}

bool Orario::operator==(Orario o) { return sec == o.sec ? true : false; }

bool Orario::operator<(Orario o) { return sec < o.sec ? true : false; }

bool Orario::operator>(Orario o) { return sec > o.sec ? true : false; }
