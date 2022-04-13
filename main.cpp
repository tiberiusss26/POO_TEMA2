///Tema 6. Se dau următoarele clase:
///-Abonament (string nume_abonament, float pret, int perioadă)
///-Abonament_Premium (int reducere) : Abonament
///-Persoană (int id, string nume, string cnp)
///-Abonat (string nr_telefon, Abonament x) : Persoana
///Să se construiască clasa Clienți care reține o listă de abonați.
/// Să se afle numărul de abonați premium.
/// Să se realizeze o metodă care află care este suma de bani încasată de la toți abonații,
/// considerând perioada ca fiind nr de luni si prețul este plătit pe fiecare lună.

#include <iostream>
#include "AbonamentPremium.h"
#include "Abonament.h"
#include "Clienti.h"
#include <string>
#include "Abonat.h"
#include "Persoana.h"

using namespace std;

int main() {
    AbonamentPremium x("Premium", 10, 10, 2);
    cout << x.getType() << "\n";
    AbonamentPremium y("Premium", 10, 10, 0);
    cout << y.getType() << "\n";

    std::shared_ptr<Abonat> a1 = std::make_shared<Abonat>(1, "Marin", "5020223134411", "0722663864", x);
    std::shared_ptr<Abonat> b1 = std::make_shared<Abonat>(2, "Stanescu", "4020223134411", "0786675544", x);
    std::shared_ptr<Abonat> c1 = std::make_shared<Abonat>(3, "Ilie", "5000223134411", "072231321", y);
    Clienti c;
    c.adaugaAbonat(a1);
    c.adaugaAbonat(b1);
    c.adaugaAbonat(c1);

    cout << c.nrAbonatiPremium() << " Abonati Premium\n";
    cout << c.sumaIncasata() << " Ron\n";

    cout << x << '\n';

    Persoana *p1 = new Abonat(1,"Marculescu", "5020326135144","0744556253",x);
    Abonat &d1 = dynamic_cast<Abonat&>(*p1);

}
