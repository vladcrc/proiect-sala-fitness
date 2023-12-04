#ifndef ANTRENOR_HPP
#define ANTRENOR_HPP

#include "persoana.hpp"

class Antrenor : public Persoana {
public:

    Antrenor(std::string nume);


    Antrenor(const Antrenor &other);


    ~Antrenor();


    friend std::ostream &operator<<(std::ostream &out, const Antrenor &antrenor);


    void oferaSfaturi() const;


    void executaActivitate() const override;


    std::unique_ptr<Persoana> clone() const override;
};

#endif // ANTRENOR_HPP
