#include "Damier.h"
#include <iostream>
#include "Piece.h"
using namespace std;


Damier::Damier()
{
    m_largeur=10;
    m_longueur=10;
    m_damier[10][10];

    cout<<"objet initialise" << endl;
}
void Damier::RemplirDamier()
{
    for(int i = 0;i<2;i++)
    {
        for(int j=0; j<10;j++)
        {

        }

    }


}
void Damier:: AfficherDamier()
{
    /*for(int i = 0;i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            if(j=9)
            {
                cout<<m_damier[i][j]<<endl;
            }
            else
                cout<<m_damier[i][j];
        }

    }
*/
}
