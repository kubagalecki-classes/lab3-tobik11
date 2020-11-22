#include <iostream>

class Statek {
public:
	virtual unsigned int transportuj() {

	}

};


class Tankowiec : public Statek {
public:
	unsigned int transportuj() override{

	}
};

class Zaglowiec : public Statek {
public:
	unsigned int transportuj() override {

	}
};

class Stocznia {
	Statek* operator()() {
		int p = rand() % 100;
		if (p > 50)
			return new Tankowiec{};
		else
			return new Zaglowiec{};
	}
};




int main()
{
    puts("Hello, World!");
}
