#include "../headers/client.hpp"

// Constructor de inițializare
Client::Client(std::string nume, int varsta) : Persoana(nume), varsta(varsta) {}

// Constructor de copiere
Client::Client(const Client &other) : Persoana(other), varsta(other.varsta) {}

// Destructor
Client::~Client() {
    std::cout << "Clientul " << nume << " a fost eliminat.\n";
}

// Operatorul <<
std::ostream &operator<<(std::ostream &out, const Client &client) {
    out << "Nume: " << client.nume << ", Varsta: " << client.varsta;
    return out;
}

// Funcție membru 1
void Client::antrenament() const {
    std::cout << nume << " face antrenament.\n";
}

// Funcție membru virtuală
void Client::executaActivitate() const {
    antrenament();
}

// Funcție de clonare
std::unique_ptr<Persoana> Client::clone() const {
    return std::make_unique<Client>(*this);
}
