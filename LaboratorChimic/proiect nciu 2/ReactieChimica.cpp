#include "ReactieChimica.h"
#include <iostream>

ReactieChimica::ReactieChimica(const std::string& tipReacție) : tipReacție(tipReacție) {}

void ReactieChimica::adaugaReactant(const Substanta& substanta) {
    reactanti.push_back(substanta);
}

void ReactieChimica::genereazaProduse() {
    produse.clear();

    if (tipReacție == "combinare") {
        if (reactanti.size() == 2) {
            // H2 + O2 -> H2O
            if ((reactanti[0].getFormula() == "H2" && reactanti[1].getFormula() == "O2") ||
                (reactanti[1].getFormula() == "H2" && reactanti[0].getFormula() == "O2")) {
                produse.push_back(Substanta("Apa", "H2O", "lichid"));
            }
        }
    }
    else if (tipReacție == "descompunere") {
        if (reactanti.size() == 1) {
            // H2O -> H2 + O2
            if (reactanti[0].getFormula() == "H2O") {
                produse.push_back(Substanta("Hidrogen", "H2", "gaz"));
                produse.push_back(Substanta("Oxigen", "O2", "gaz"));
            }
        }
    }
    else if (tipReacție == "inlocuire") {
        if (reactanti.size() == 2) {
            // Zn + HCl -> ZnCl2 + H2
            if ((reactanti[0].getFormula() == "Zn" && reactanti[1].getFormula() == "HCl") ||
                (reactanti[1].getFormula() == "Zn" && reactanti[0].getFormula() == "HCl")) {
                produse.push_back(Substanta("Clorura de zinc", "ZnCl2", "solid"));
                produse.push_back(Substanta("Hidrogen", "H2", "gaz"));
            }
        }
    }
    else if (tipReacție == "schimb") {
        if (reactanti.size() == 2) {
            // NaCl + AgNO3 -> AgCl + NaNO3
            if ((reactanti[0].getFormula() == "NaCl" && reactanti[1].getFormula() == "AgNO3") ||
                (reactanti[1].getFormula() == "NaCl" && reactanti[0].getFormula() == "AgNO3")) {
                produse.push_back(Substanta("Clorura de argint", "AgCl", "solid"));
                produse.push_back(Substanta("Nitrat de sodiu", "NaNO3", "solubil"));
            }
        }
    }
}

void ReactieChimica::afiseazaReactie() const {
    std::cout << "\nTip reactie: " << tipReacție << "\nReactanti:\n";
    for (const auto& reactant : reactanti) {
        reactant.afiseazaInformatii();
    }
    std::cout << "\nProduse:\n";
    for (const auto& produs : produse) {
        produs.afiseazaInformatii();
    }
}


