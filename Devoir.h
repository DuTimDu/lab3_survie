#pragma once
#include "Participant.h"


class Devoir : public Participant
{
public:
	inline Devoir(char id, char energie, int px, int py);
};

Devoir::Devoir(char id, char energie, int px, int py) : Participant(id, px, py, energie)
{
}