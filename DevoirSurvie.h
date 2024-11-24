#pragma once
#include "Devoir.h"

class DevoirSurvie : public Devoir
{
public:
	inline DevoirSurvie(int px, int py);
	int fournirPonderation() const override
	{
		return 2;
	}
	bool toujoursEnAction() const override
	{
		return true;
	}
};

DevoirSurvie::DevoirSurvie(int px, int py) : Devoir('S', 2, px, py)
{
}
