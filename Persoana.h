//
// Created by Tiberiu Titiriga on 03.04.2022.
//

#ifndef POO_TEMA2_PERSOANA_H
#define POO_TEMA2_PERSOANA_H

#include <string>

class Persoana {
protected:
    int id;
    std::string nume;
    std::string cnp;
public:
    Persoana(int id, const std::string &nume, const std::string &cnp);

    Persoana();


    virtual ~Persoana();
};


#endif //POO_TEMA2_PERSOANA_H
