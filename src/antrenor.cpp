#include "../headers/antrenor.hpp"


Antrenor::Antrenor(std::string nume) : Persoana(nume) {}


Antrenor::Antrenor(const Antrenor &other) : Persoana(other) {}


Antrenor::~Antrenor() {
    std::cout << "Antrenorul " << nume << " a fost eliminat\n";
}

std::ostream &operator<<(std::ostream &out, const Antrenor &antrenor) {
    out << "Nume antrenor: " << antrenor.nume;
    return out;
}


void Antrenor::oferaSfaturi() const {
    std::cout << "Antrenorul " << nume << " oferă sfaturi\n";
}


void Antrenor::executaActivitate() const {
    oferaSfaturi();
}


std::unique_ptr<Persoana> Antrenor::clone() const {
    return std::make_unique<Antrenor>(*this);
}
