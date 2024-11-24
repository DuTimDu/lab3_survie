
// Auteurs: Timoth� DURAND DURT07072004
//          Gaetan Darrot DARG09072002




#include "Session.h"

int main() {
    int niveau;
    cout << "Entrez le niveau de la session (taille du tableau) : ";
    cin >> niveau;

    Session session("a2024", niveau); 


    do {
        cout << session << endl;

        cout << "Choisissez une action :\n";
        cout << "1 - Avancer\n";
        cout << "2 - Reculer\n";
        cout << "3 - Gauche\n";
        cout << "4 - Droite\n";
        cout << "Votre choix : ";
        int choix;
        cin >> choix;

        switch (choix) {
        case 1: session.avancer(); break;
        case 2: session.reculer(); break;
        case 3: session.gauche(); break; 
        case 4: session.droite(); break; 
        default:
            cout << "Choix invalide. R�essayez.\n";
            continue;
		} 
    } while (session.terminer() == false);

	cout << "Session termin�e : " << session.tirerConclusion() << endl;

    return 0;
}

