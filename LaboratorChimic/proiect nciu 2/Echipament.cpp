#include "Echipament.h"
#include <iostream>

Echipament::Echipament(const std::string& tip, double capacitate)
    : tip(tip), capacitate(capacitate) {}

void Echipament::afiseazaEchipament() const {
    std::cout << "Echipament: " << tip << "\nCapacitate: " << capacitate << " ml\n";
}

