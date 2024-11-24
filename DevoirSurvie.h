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
};

DevoirSurvie::DevoirSurvie(int px, int py) : Devoir('S', 2, px, py)
{
	Journalisation::sauvegarder(this);
}
