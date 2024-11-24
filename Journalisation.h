#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

class Journalisation
{
public:
	template <typename T>
	static void sauvegarder(T* obj)
	{
	ofstream monFichier("survie.txt", std::ios::app);
	monFichier << typeid(*obj).name() << endl;
	}
};
