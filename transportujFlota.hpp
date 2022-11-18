#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
	unsigned int x;
	unsigned int y = 0;
	unsigned int z = 0;

	while (y < towar)
	{
		Stocznia stocznia{};
		Statek* s1 = stocznia();
		Zaglowiec* test = dynamic_cast<Zaglowiec*>(s1);

		if (test) z += 1;

		x = s1->transportuj();
		y += x;
		delete s1;
	}

	return z;
}