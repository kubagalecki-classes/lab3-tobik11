#include "zal/include/Stocznia.hpp"
#include <iostream>

unsigned int transportujFlota(unsigned int towar)
{
    if (towar == 0)
        return 0;

    unsigned int transported = 0;
    unsigned int zaglowce    = 0;
    Stocznia     st;

    while (1) {
        Statek* s = st();
        transported += (s->transportuj());
        std::cout << transported << std::endl;
        // check if zaglowiec
        Statek* ptr;
        ptr = dynamic_cast< Zaglowiec* >(s);
        if (ptr != nullptr)
            zaglowce++;
        std::cout << ptr << std::endl;

        delete s;

        if (transported >= towar)
            break;
    }

    std::cout << zaglowce << std::endl;
    return zaglowce;
}

int main()
{
    transportujFlota(650);
}