#ifndef PIECE_H
#define PIECE_H

#include "Joueur.h"
#include "Coordonée.h"

#include <iostream>
#include <string>


class Piece
{
    public:
        Piece();
        Piece(Coordonee X);
        void infoPiece();

    protected:
        Coordonee *m_deplacment;
        Coordonee m_position;


    private:

};

#endif // PIECE_H
