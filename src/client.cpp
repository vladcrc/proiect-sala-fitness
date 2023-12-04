#include "../headers/client.hpp"


Client::Client(std::string nume, int varsta) : Persoana(nume), varsta(varsta) {}


Client::Client(const Client &other) : Persoana(other), varsta(other.varsta) {}


Client::~Client() {
    std::cout << "Clientul " << nume << " a fost eliminat.\n";
}


std::ostream &operator<<(std::ostream &out, const Client &client) {
    out << "Nume: " << client.nume << ", Varsta: " << client.varsta;
    return out;
}


void Client::antrenament() const {
    std::cout << nume << " face antrenament.\n";
}


void Client::executaActivitate() const { // Funcție membru virtuală
    antrenament();
}


std::unique_ptr<Persoana> Client::clone() const {
    return std::make_unique<Client>(*this);
}
