#include "headers/client.hpp"
#include "headers/antrenor.hpp"
#include "headers/antrenor_fitness.hpp"
#include "headers/abonament.hpp"

int main() {
    try {
        std::unique_ptr <Persoana> persoane[] = {
                std::make_unique<Client>("Andrei ", 25),
                std::make_unique<Antrenor>("Alexandru"),
                std::make_unique<AntrenorFitness>("Dumitru Cristian", "yoga")
        };

        for (const auto &persoana: persoane) {
            try {
                if (!persoana) {
                    throw std::runtime_error("Eroare: Persoana invalida.");
                }

                persoana->executaActivitate();
                std::cout << std::endl;
            } catch (const std::exception &e) {
                std::cerr << "Exceptie in bucla for: " << e.what() << "\n";
            }
        }

        std::unique_ptr <Abonament> abonamentClient = std::make_unique<Abonament>(persoane[0]->clone());
        std::unique_ptr <Abonament> abonamentAntrenor = std::make_unique<Abonament>(persoane[2]->clone());

        abonamentClient->afisareDetaliiAbonament();
        abonamentAntrenor->afisareDetaliiAbonament();

    } catch (const std::exception &e) {
        std::cerr << "Exceptie in main: " << e.what() << "\n";
    }

    return 0;
}
