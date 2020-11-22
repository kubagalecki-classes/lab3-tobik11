#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
   	if (towar == 0)
		return 0;

	unsigned int transported = 0;
	unsigned int zaglowce = 0;
	Stocznia st;

	while (1) {
		Statek* s = st();
		transported += (s->transportuj());
		cout << transported << endl;
		// check if zaglowiec
		Statek* ptr;
		ptr = dynamic_cast <Zaglowiec*>(s);
		if (ptr != nullptr)
			zaglowce++;
		cout << ptr << endl;

		delete s;

		if (transported >= towar)
			break;
	}



	cout << zaglowce << endl;
	return zaglowce;
}