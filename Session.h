#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "Participant.h"
#include "Devoir.h"
#include "Etudiant.h"

using namespace std;

class Session
{
public:
	Session(string sigle, int niveau);
	~Session();
	Session(const Session& s) = delete;

	void avancer() { deplacer(etudiant->getX() - 1, etudiant->getY()); }
	void reculer() { deplacer(etudiant->getX() + 1, etudiant->getY()); }
	void gauche() { deplacer(etudiant->getX(), etudiant->getY() - 1); }
	void droite() { deplacer(etudiant->getX(), etudiant->getY() + 1); }
	bool terminer() const { return !enCours; }
	string tirerConclusion() const { return conclusion; }

	friend ostream& operator<<(ostream& out, const Session& session);

private:
	Participant*** participants;
	string sigle;
	int niveau;
	Etudiant* etudiant;
	bool enCours;
	string conclusion;
	int devoirsAReussir;

	void initialiserDevoirs();
	void initialiserEtudiant();
	void initialiserPosition(int& x, int& y);
	int positionAleatoire() const;
	bool validation(int x, int y) const;
	void deplacer(int x, int y);
};
