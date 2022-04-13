//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#ifndef POO_TEMA2_ABONAT_H
#define POO_TEMA2_ABONAT_H

#include <string>
#include "AbonamentPremium.h"
#include "Persoana.h"

class Abonat : public Persoana {
    std::string nr_telefon;
    AbonamentPremium *x;
public:
//    Abonat(int id, const std::string &nume, const std::string &cnp, std::string &nrTelefon, const AbonamentPremium &x);

    Abonat(const Abonat &ab);

    Abonat(int i, std::string basicString, std::string basicString1, std::string basicString2,
           AbonamentPremium &premium);

    Abonat();

    void setNrTelefon(const std::string &nrTelefon);

    void setX(AbonamentPremium *x);

    bool isPremium();

    int getSumaPlatita();

    virtual ~Abonat();


};


#endif //POO_TEMA2_ABONAT_H
