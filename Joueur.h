#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include <vector>
#include "Piece.h"


#include "Coordonée.h"

using namespace std;

class Piece;
class Joueur
{
    public:
        Joueur();
        Joueur(string NomJoueur);
        string getnomJoueur() const;
        vector<Piece> getPieceJoueur() const;

    protected:

    private:
        string m_NomduJoueur;
        vector<Piece> m_listepiece;



};

#endif // JOUEUR_H
