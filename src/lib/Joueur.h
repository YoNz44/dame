#ifndef JOUEUR_H
#define JOUEUR_H

#include <iostream>
#include <string>
#include <vector>
#include "Piece.h"


#include "Coordonee.h"

using namespace std;


class Piece;
class Joueur
{
    public:
        Joueur();
        Joueur(string NomJoueur);
        string getnomJoueur() const;
        vector<Piece> getPieceJoueur() const;
        int getIdJoueur() const;
        void initPionJoueur1();
        void initPionJoueur2();
        void AfficherPositionPiece();

    protected:

    private:
        string m_NomduJoueur;
        vector<Piece> m_listepiece;
        static int m_numerojoueur;
        int m_idjoueur;



};

#endif // JOUEUR_H
