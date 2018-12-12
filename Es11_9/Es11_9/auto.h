#ifndef AUTO_H
#define AUTO_H


class Auto {
public:
    /**
      Definisco un "interfaccia" che garantisca l'accesso
      a determinate informazioni della classe padre
    */
    int cavalliFiscali() const;
    static double getTassaPerCf();
    virtual double tassa() const = 0;

private:
    int cavalliFiscali;

    /**
     * @brief tassaPerCf - Posso definirla const e static, in quanto, non verra mai editata
     */
    static const double tassaPerCf;

/**
Tutto cio che viene definito dentro protected potra
essere visto/utilizzato da:
- membri e "friends" della classe base
- membri e "friends" di qualsiasi membro derivato
  dalla base, ma solo quando si sta operando su di
  un oggetto di un tipo derivato dalla base
*/
protected:
    Auto(); // Metodo costruttore
    virtual ~A();// Ridefinizione del metodo di distruzione
};

double Auto::tassaPerCf = 5;

#endif // AUTO_H
