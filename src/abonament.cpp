#include "abonament.hpp"

Abonament::Abonament(std::unique_ptr<Persoana> abonat) : abonat(std::move(abonat)) {
    if (!this->abonat) {
        throw std::runtime_error("Eroare: Abonamentul nu a putut fi creat. Persoana invalida.");
    }
}

Abonament::~Abonament() {
    std::cout << "Abonamentul a fost anulat.\n";
}

void Abonament::afisareDetaliiAbonament() const {
    try {
        if (!abonat) {
            throw std::runtime_error("Eroare: Abonamentul nu are un abonat valid.");
        }

        std::cout << "Detalii abonament:\n";
        abonat->executaActivitate();
        std::cout << "Abonat: " << abonat->getNume() << "\n";
    } catch (const std::exception &e) {
        std::cerr << "Exceptie in Abonament::afisareDetaliiAbonament: " << e.what() << "\n";
    }
}
