#include "../headers/persoana.hpp"


Persoana::Persoana(std::string nume) : nume(nume) {}


Persoana::~Persoana() {
    std::cout << "Persoana " << nume << " a fost eliminată.\n";
}


std::string Persoana::getNume() const {
    return nume;
}
