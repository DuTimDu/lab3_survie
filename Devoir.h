#pragma once
#include "Journalisation.h"
#include "Participant.h"



class Devoir : public Participant
{
public:
	inline Devoir(char id, char energie, int px, int py);
	virtual int fournirPonderation() const = 0;
};

Devoir::Devoir(char id, char energie, int px, int py) : Participant(id, px, py, energie)
{
	Journalisation::sauvegarder(this);
}