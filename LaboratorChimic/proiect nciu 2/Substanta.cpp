#include "Substanta.h"

Substanta::Substanta(const std::string& nume, const std::string& formula, const std::string& stare)
    : nume(nume), formula(formula), stare(stare) {}

std::string Substanta::getNume() const {
    return nume;
}

std::string Substanta::getFormula() const {
    return formula;
}

std::string Substanta::getStare() const {
    return stare;
}

void Substanta::afiseazaInformatii() const {
    std::cout << "Nume: " << nume << ", Formula: " << formula << ", Stare: " << stare << "\n";
}



