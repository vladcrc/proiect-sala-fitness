#ifndef CLIENT_HPP
#define CLIENT_HPP

#include "persoana.hpp"

class Client : public Persoana {
private:
    int varsta;

public:

    Client(std::string nume, int varsta);


    Client(const Client &other);


    ~Client();


    friend std::ostream &operator<<(std::ostream &out, const Client &client);


    void antrenament() const;


    void executaActivitate() const override;


    std::unique_ptr<Persoana> clone() const override;
};

#endif // CLIENT_HPP
