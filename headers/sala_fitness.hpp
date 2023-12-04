#ifndef SALA_FITNESS_HPP
#define SALA_FITNESS_HPP

#include <vector>
#include "client.hpp"
#include "antrenor.hpp"

class SalaFitness {
private:
    std::vector<Client> clienti;
    Antrenor antrenor;

public:
    // Constructor de inițializare
    SalaFitness(Antrenor antrenor);

    // Destructor
    ~SalaFitness();

    // Adăugare client în sală
    void adaugaClient(const Client &client);

    // Funcție membru 3
    void antrenamentInGrupa();
};

#endif // SALA_FITNESS_HPP
