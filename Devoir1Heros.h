#pragma once
#include "Devoir.h"
class Devoir1Heros : public Devoir
{
public:
	inline Devoir1Heros(int px, int py);
	int fournirPonderation() const override
	{
		return 1;
	}
	bool toujoursEnAction() const override
	{
		return true;
	}
};

Devoir1Heros::Devoir1Heros(int px, int py) : Devoir('H', 1, px, py)
{
}
