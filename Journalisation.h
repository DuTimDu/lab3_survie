#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
class Journalisation
{
public:
	static void sauvegarder(const Session* session);
	
};

void Journalisation::sauvegarder(const Session* session)
{
	ofstream monFichier("survie.txt", std::ios::app);
	monFichier << typeid(session).name() << endl;
};