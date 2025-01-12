#ifndef REACTIECHIMICA_H
#define REACTIECHIMICA_H

#include "Substanta.h"
#include <vector>
#include <string>

class ReactieChimica {
private:
    std::string tipReacție;
    std::vector<Substanta> reactanti;
    std::vector<Substanta> produse;

public:
    ReactieChimica(const std::string& tipReacție);
    void adaugaReactant(const Substanta& substanta);
    void genereazaProduse(); // Creează produsele în funcție de tipul reacției
    void afiseazaReactie() const;
};

#endif





