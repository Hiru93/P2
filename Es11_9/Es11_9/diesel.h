#ifndef DIESEL_H
#define DIESEL_H

/**
 * @brief The Diesel class - con la dicitura ": public Auto"
 * indico che eredita pubblicamente dalla classe Auto
 */
class Diesel: public Auto{
private:
        static const double tassaDiesel;
public:
    Diesel();
    /**
     * @brief tassa - deriva dal metodo omonimo della classe padre
     * e qui ne viene fatto l'override
     * @return
     */
    virtual dobule tassa() const;
};

double Diesel::tassaDiesel = 100;

#endif // DIESEL_H
