#pragma once
#include "Devoir.h"

class Devoir3Inconnu : public Devoir
{
public:
	inline Devoir3Inconnu(int px, int py);
	int fournirPonderation() const override
	{
		return 5;
	}
	bool toujoursEnAction() const override
	{
		return true;
	}
};

Devoir3Inconnu::Devoir3Inconnu(int px, int py) : Devoir('I', 5, px, py)
{
}