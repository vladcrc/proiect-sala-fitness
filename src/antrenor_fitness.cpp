#include "../headers/antrenor_fitness.hpp"


AntrenorFitness::AntrenorFitness(std::string nume, std::string specializare)
        : Antrenor(nume), specializare(specializare) {}


AntrenorFitness::~AntrenorFitness() {
    std::cout << "Antrenorul de fitness " << nume << " a fost eliminat\n";
}


void AntrenorFitness::sustineSedinta() const {
    std::cout << "Antrenorul de fitness " << nume << " susține o ședință de " << specializare << ".\n";
}


void AntrenorFitness::executaActivitate() const {
    sustineSedinta();
}


std::unique_ptr<Persoana> AntrenorFitness::clone() const {
    return std::make_unique<AntrenorFitness>(*this);
}
