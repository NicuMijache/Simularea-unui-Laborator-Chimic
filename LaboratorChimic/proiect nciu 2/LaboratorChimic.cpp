#include "Substanta.h"
#include "ReactieChimica.h"
#include <iostream>
#include <vector>

void afiseazaTipuriReactii() {
    std::cout << "1. Combinare\n";
    std::cout << "2. Descompunere\n";
    std::cout << "3. Inlocuire\n";
    std::cout << "4. Schimb\n";
}

int main() {
    
    std::vector<Substanta> substante = {
        Substanta("Hidrogen", "H2", "gaz"),
        Substanta("Oxigen", "O2", "gaz"),
        Substanta("Clorura de sodiu", "NaCl", "solid"),
        Substanta("Apa", "H2O", "lichid"),
        Substanta("Zinc", "Zn", "solid"),
        Substanta("Clorura de hidrogen", "HCl", "gaz"),
        Substanta("Argint", "Ag", "solid"),
        Substanta("Azotat de argint", "AgNO3", "solid")
    };

    std::cout << "Alege tipul de reactie chimica:\n";
    afiseazaTipuriReactii();
    int tipReacție;
    std::cin >> tipReacție;

    std::string tip;
    switch (tipReacție) {
    case 1: tip = "combinare"; break;
    case 2: tip = "descompunere"; break;
    case 3: tip = "inlocuire"; break;
    case 4: tip = "schimb"; break;
    default:
        std::cout << "Tip invalid!\n";
        return 0;
    }

    ReactieChimica reactie(tip);
        
    int alegere = -1;
    while (alegere != 0) {
        std::cout << "\n1. Adauga reactant\n2. Genereaza produse\n3. Afiseaza reactie\n0. Iesire\nAlege o optiune: ";
        std::cin >> alegere;

        if (alegere == 1) {
            std::cout << "Selecteaza un reactant:\n";
            for (size_t i = 0; i < substante.size(); ++i) {
                std::cout << i + 1 << ". " << substante[i].getNume() << " (" << substante[i].getFormula() << ")\n";
            }
            int index;
            std::cin >> index;
            if (index > 0 && index <= static_cast<int>(substante.size())) {
                reactie.adaugaReactant(substante[index - 1]);
            }
            else {
                std::cout << "Alegere invalida!\n";
            }
        }
        else if (alegere == 2) {
            reactie.genereazaProduse();
        }
        else if (alegere == 3) {
            reactie.afiseazaReactie();
        }
        else if (alegere != 0) {
            std::cout << "Optiune invalida!\n";
        }
    }

    std::cout << "La revedere!\n";
    return 0;
}
