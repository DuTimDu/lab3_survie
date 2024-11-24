#include "Participant.h"
#include <iostream>
using namespace std;

Participant::Participant(char id, int px, int py)
{
	this->id = id;
	this->positionX = px;
	this->positionY = py;
	this->energie = 5;
}

Participant::Participant(char id, int px, int py, int energie)
{
	this->id = id;
	this->positionX = px;
	this->positionY = py;
	this->energie = energie;
}

Participant::~Participant()
{
}