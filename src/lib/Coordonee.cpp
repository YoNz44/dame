#include "Coordonee.h"
using namespace std;


Coordonee::Coordonee()
{
    m_abscisse=0;
    m_ordonnee=0;
}
Coordonee::Coordonee(int abscisse, int ordonnee)
{

    m_abscisse=abscisse;
    m_ordonnee=ordonnee;
}
int Coordonee:: getabscisse() const
{

    return m_abscisse;
}

int Coordonee:: getordonnee() const
{

    return m_ordonnee;
}
