#include "headers/client.hpp"
#include "headers/antrenor.hpp"
#include "headers/antrenor_fitness.hpp"
#include "headers/abonament.hpp"

int main() {
    try {
        std::shared_ptr <Persoana> persoane[] = {
                std::make_shared<Client>("Alice", 25),
                std::make_shared<Antrenor>("John Doe"),
                std::make_shared<AntrenorFitness>("Jane Smith", "yoga")
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

        std::shared_ptr <Abonament> abonamentClient = std::make_shared<Abonament>(persoane[0]);
        std::shared_ptr <Abonament> abonamentAntrenor = std::make_shared<Abonament>(persoane[2]);

        abonamentClient->afisareDetaliiAbonament();
        abonamentAntrenor->afisareDetaliiAbonament();

    } catch (const std::exception &e) {
        std::cerr << "Exceptie in main: " << e.what() << "\n";
    }

    return 0;
}
