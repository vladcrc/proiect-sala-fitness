#include "..headers/sala_fitness.hpp"

// Constructor de inițializare
SalaFitness::SalaFitness(Antrenor antrenor) : antrenor(antrenor) {}

// Destructor
SalaFitness::~SalaFitness() {
    std::cout << "Sala de fitness a fost închisă.\n";
}

// Adăugare client în sală
void SalaFitness::adaugaClient(const Client &client) {
    clienti.push_back(client);
    std::cout << "Client adăugat în sală: " << client << "\n";
}

// Funcție membru 3
void SalaFitness::antrenamentInGrupa() {
    std::cout << "Antrenament în grupa cu antrenorul " << antrenor << ".\n";
}
