//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#ifndef POO_TEMA2_ABONAMENTPREMIUM_H
#define POO_TEMA2_ABONAMENTPREMIUM_H

#include "Abonament.h"

class AbonamentPremium : public Abonament {
protected:
    int reducere;
public:
//    AbonamentPremium(const std::string &numeAbonament, float pret, int perioada,int reducere) : Abonament(numeAbonament,pret, perioada);

    AbonamentPremium(const std::string &numeAbonament, float pret, int perioada, int reducere);

    AbonamentPremium(const AbonamentPremium &a);

    static bool premium(AbonamentPremium &a);

    AbonamentPremium &operator=(const AbonamentPremium &rhs);

    int getReducere() const;

    AbonamentPremium();

    int sumaPlatita();

    virtual ~AbonamentPremium();

    std::string getType() override;

    friend std::ostream &operator<<(std::ostream &os, AbonamentPremium ab);


};


#endif //POO_TEMA2_ABONAMENTPREMIUM_H
