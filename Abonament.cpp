//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#include "Abonament.h"

Abonament::Abonament(const std::string &numeAbonament, float pret, int perioada) : nume_abonament(numeAbonament),
                                                                                   pret(pret), perioada(perioada) {}

Abonament::Abonament() {}

const std::string &Abonament::getNumeAbonament() const {
    return nume_abonament;
}

float Abonament::getPret() const {
    return pret;
}

int Abonament::getPerioada() const {
    return perioada;
}

std::ostream &operator<<(std::ostream &os, Abonament *ab) {
    std::cout << ab->nume_abonament << ' ' << ab->pret << ' ' << ab->perioada << ' ';
    return os;
}


Abonament::~Abonament() = default;
