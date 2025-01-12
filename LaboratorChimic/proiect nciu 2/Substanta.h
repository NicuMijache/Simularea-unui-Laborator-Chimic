#ifndef SUBSTANTA_H
#define SUBSTANTA_H

#include <string>
#include <iostream>

class Substanta {
private:
    std::string nume;
    std::string formula;
    std::string stare; // Solid, lichid, gaz
public:
    Substanta(const std::string& nume, const std::string& formula, const std::string& stare);
    std::string getNume() const;
    std::string getFormula() const;
    std::string getStare() const;
    void afiseazaInformatii() const;
};

#endif



