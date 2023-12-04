#ifndef ABONAMENT_HPP
#define ABONAMENT_HPP

#include "persoana.hpp"
#include <memory>

class Abonament {
private:
    std::shared_ptr<Persoana> abonat;

public:
    Abonament(std::shared_ptr<Persoana> abonat);
    ~Abonament();

    void afisareDetaliiAbonament() const;
};

#endif // ABONAMENT_HPP
