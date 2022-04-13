//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#ifndef POO_TEMA2_ABONAMENT_H
#define POO_TEMA2_ABONAMENT_H

#include <string>
#include <iostream>

enum class Type {
    premium,
    standard
};

class Abonament {
protected:
    std::string nume_abonament;
    float pret;
    int perioada;
public:
    Abonament();

    Abonament(const std::string &numeAbonament, float pret, int perioada);

    virtual ~Abonament();

    virtual std::string getType() = 0;

    const std::string &getNumeAbonament() const;

    float getPret() const;

    int getPerioada() const;

    friend std::ostream &operator<<(std::ostream &os, Abonament *ab);

};


#endif //POO_TEMA2_ABONAMENT_H
