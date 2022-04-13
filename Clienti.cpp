//
// Created by Tiberiu Titiriga on 03.04.2022.
//
#include <iostream>
#include "Clienti.h"

std::vector<std::shared_ptr<Abonat>> Clienti::abonati = {};


Clienti::Clienti() { abonati.clear(); }

//Clienti::Clienti(const std::vector<Abonat> &abonati) : abonati(abonati) {}

void Clienti::adaugaAbonat(const std::shared_ptr<Abonat> &a) {
    abonati.push_back(a);

}

int Clienti::nrAbonatiPremium() {
    int k = 0;
    for (auto it: abonati) {
        if (it->isPremium()) k++;
    }
    return k;
}

int Clienti::sumaIncasata() {
    int s = 0;
    for (auto it: abonati) {
        s += it->getSumaPlatita();
    }
    return s;
}

std::ostream &operator<<(std::ostream &os, const Clienti &clienti) {
    for (auto it: clienti.abonati) {
        std::cout<<it;
    }
    return os;
}
