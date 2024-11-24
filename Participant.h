#pragma once
#include <iostream>
using namespace std;

class Participant
{
private:
	char id;
	int energie;
	int positionX;
	int positionY;
public:
	Participant(char id, int px, int py);
	Participant(char id, int px, int py,int energie);
	virtual ~Participant();
	inline char getId() const;
	inline int getEnergie() const;
	inline int getPositionX() const;
	inline int getPositionY() const;

	
protected:
	inline void ModifierEnergie(int quantite);
	inline void setX(int x);
	inline void setY(int y);
};

char Participant::getId() const
{
	return id;
}

int Participant::getEnergie() const
{
	return energie;
}

int Participant::getPositionX() const
{
	return positionX;
}

int Participant::getPositionY() const
{
	return positionY;
}

void Participant::ModifierEnergie(int quantite) 
{
	energie += quantite;
}

void Participant::setX(int x)
{
	positionX = x;
}

void Participant::setY(int y)
{
	positionY = y;
}


