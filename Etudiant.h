#pragma once
#include "Participant.h"
class Etudiant : public Participant
{
public:
    inline Etudiant( int px, int py, int energie);
    inline bool toujoursEnAction() const;
    inline void subirEchec();
    inline void reussirDevoir(int energie);
    inline void setNouvellePosition(int x, int y);
    inline int getX() const; 
    inline int getY() const;
};

Etudiant::Etudiant( int px, int py, int energie) : Participant('E', px, py, energie)
{
    Journalisation::sauvegarder(this);
}

bool Etudiant::toujoursEnAction() const
{
    return (getEnergie() > 0);
}

void Etudiant::subirEchec()
{
    ModifierEnergie(-1);
}

void Etudiant::reussirDevoir(int energie)
{
    ModifierEnergie(energie);
}

void Etudiant::setNouvellePosition(int x, int y)
{
    setX(x);
    setY(y);
}

int Etudiant::getX() const
{
	return getPositionX();
}

int Etudiant::getY() const
{
	return getPositionY();
}