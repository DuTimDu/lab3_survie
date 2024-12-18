#pragma once
#include "Devoir.h"

class Devoir2Commande : public Devoir
{
public:
	inline Devoir2Commande(int px, int py);
	int fournirPonderation() const override
	{
		return 3;
	}
};

Devoir2Commande::Devoir2Commande(int px, int py) : Devoir('C', 3, px, py)
{
	Journalisation::sauvegarder(this);
}