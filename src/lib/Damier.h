#ifndef DAMIER_H
#define DAMIER_H
#include "Piece.h"

class Damier
{
    public:
        Damier();
        void AfficherDamier();
        void RemplirDamier();

    protected:

    private:
        int m_largeur;
        int m_longueur;
        Piece m_damier[10][10];
};

#endif // DAMIER_H
