#ifndef ANTRENOR_FITNESS_HPP
#define ANTRENOR_FITNESS_HPP

#include "antrenor.hpp"

class AntrenorFitness : public Antrenor {
private:
    std::string specializare;

public:

    AntrenorFitness(std::string nume, std::string specializare);


    ~AntrenorFitness();


    void sustineSedinta() const;


    void executaActivitate() const override;


    std::unique_ptr<Persoana> clone() const override;
};

#endif // ANTRENOR_FITNESS_HPP
