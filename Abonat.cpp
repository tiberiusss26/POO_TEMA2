//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#include "Abonat.h"

//Abonat::Abonat( int id, const std::string &nume, const std::string &cnp, std::string &nrTelefon, const AbonamentPremium &x) : Persoana(id,nume, cnp),nr_telefon(nrTelefon), x(x) {}

Abonat::Abonat(const Abonat &ab) : Persoana(ab.id, ab.nume, ab.cnp) {
    nr_telefon=ab.nr_telefon;
    x=ab.x;
}

Abonat::Abonat(int i, std::string basicString, std::string basicString1, std::string basicString2,
               AbonamentPremium &premium) : Persoana(i, std::move(basicString), std::move(basicString1)){
    nr_telefon=basicString2;
    x=&premium;

}

bool Abonat::isPremium() {
    if(x->getReducere() !=0 ) return true;
    return false;
}

int Abonat::getSumaPlatita() {
    return x->sumaPlatita();
}

Abonat::~Abonat() {

}

void Abonat::setNrTelefon(const std::string &nrTelefon) {
    nr_telefon = nrTelefon;
}

void Abonat::setX(AbonamentPremium *x) {
    Abonat::x = x;
}


Abonat::Abonat() = default;

//int main(){
//    AbonamentPremium x;
//    Abonat a(10,"absdad","0287312","0128732",x);
//}

