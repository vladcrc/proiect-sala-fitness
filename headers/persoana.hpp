#ifndef PERSOANA_HPP
#define PERSOANA_HPP

#include <iostream>
#include <memory>
#include <string>

class Persoana {
protected:
    std::string nume;

public:

    Persoana(std::string nume);


    virtual ~Persoana();


    virtual void executaActivitate() const = 0;


    virtual std::unique_ptr<Persoana> clone() const = 0;


    std::string getNume() const;
};

#endif // PERSOANA_HPP
