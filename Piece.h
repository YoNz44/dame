#ifndef PIECE_H
#define PIECE_H

#include "Joueur.h"
#include "Coordon�e.h"

#include <iostream>
#include <string>


class Piece
{
    public:
        Piece();
        Piece(Coordonee X);

    protected:
        Coordonee *m_deplacment;



    private:

};

#endif // PIECE_H
