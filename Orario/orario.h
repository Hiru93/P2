#ifndef ORARIO_H
#define ORARIO_H


class Orario
{
public:
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
    int Ore();
    /**
     * @brief Minuti - Selettore campo Minuti
     * @return int
     */
    int Minuti();
    /**
     * @brief Secondi - Selettore campo Secondi
     * @return int
     */
    int Secondi();

private:
    int sec;
};

#endif // ORARIO_H
