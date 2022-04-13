//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#include "AbonamentPremium.h"
#include "Abonament.h"
//#include <iostream>

AbonamentPremium::AbonamentPremium(const std::string &numeAbonament, float pret, int perioada, int reducere)
        : Abonament(numeAbonament, pret, perioada), reducere(reducere) {}

bool AbonamentPremium::premium(AbonamentPremium &a) {
    if (a.reducere != 0)
        return true;
    return false;
}

AbonamentPremium &AbonamentPremium::operator=(const AbonamentPremium &rhs) {
    this->nume_abonament = rhs.nume_abonament;
    this->pret = rhs.pret;
    this->perioada = rhs.perioada;
    return *this;

}

AbonamentPremium::AbonamentPremium() {}

AbonamentPremium::AbonamentPremium(const AbonamentPremium &a) : Abonament(a.nume_abonament, a.pret, a.perioada) {
    reducere = a.reducere;

}

int AbonamentPremium::getReducere() const {
    return reducere;
}

int AbonamentPremium::sumaPlatita() {
    return perioada * (pret - reducere);
}

AbonamentPremium::~AbonamentPremium() {

}

std::string AbonamentPremium::getType() {
    if (reducere != 0) return "premium";
    else return "standard";
}

std::ostream &operator<<(std::ostream &os, AbonamentPremium ab) {
    std::cout << ab.nume_abonament << ' ' << ab.pret << ' ' << ab.perioada << ' ' << ab.reducere << ' ';
    return os;
}













