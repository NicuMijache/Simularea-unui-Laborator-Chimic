#ifndef ECHIPAMENT_H
#define ECHIPAMENT_H

#include <string>

class Echipament {
private:
    std::string tip;
    double capacitate;

public:
    Echipament(const std::string& tip, double capacitate);
    void afiseazaEchipament() const;
};

#endif

