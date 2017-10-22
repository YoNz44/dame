#include "Partie.h"
#include "Joueur.h"

#include <iostream>





Partie::Partie()
{
    string nomjoueur,nomjoueur2;
    cout<<"Rentrez le nom du Joueur 1"<<endl;
    cin >> nomjoueur;
    Joueur J1(nomjoueur);
    cout<<"Rentrez le nom du Joueur 2"<<endl;
    cin >> nomjoueur2;
    Joueur J2(nomjoueur2);

    J1.AfficherPositionPiece();
    J2.AfficherPositionPiece();

}
