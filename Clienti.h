//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#ifndef POO_TEMA2_CLIENTI_H
#define POO_TEMA2_CLIENTI_H
#include "Abonat.h"
#include <vector>
#include <ostream>

class Clienti {
    static std::vector<std::shared_ptr<Abonat>> abonati;

public:
    Clienti();

    static void adaugaAbonat(const std::shared_ptr<Abonat> &a);

    int nrAbonatiPremium();

    int sumaIncasata();

    friend std::ostream &operator<<(std::ostream &os, const Clienti &clienti);

};


#endif //POO_TEMA2_CLIENTI_H
