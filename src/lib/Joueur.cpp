#include "Joueur.h"

using namespace std;

int Joueur:: m_numerojoueur =0;

Joueur::Joueur()
{
    m_NomduJoueur="Lambda";
     vector<Piece> m_listepiece(1);
     ++m_numerojoueur;
    m_idjoueur=m_numerojoueur;
    if(m_numerojoueur==1)
    {
        initPionJoueur1();


    }
    else

        initPionJoueur2();
}

Joueur::Joueur(string NomJoueur)
{
    m_NomduJoueur=NomJoueur;
     vector<Piece> m_listepiece(1);
     ++m_numerojoueur;
     m_idjoueur=m_numerojoueur;

      if(m_numerojoueur==1)
    {
        initPionJoueur1();
    }
    else

        initPionJoueur2();

}

void Joueur:: initPionJoueur1()
{

        for(int i =0; i<2; i++)
        {
            for(int j =0;j<10;j++)
            {
            //cout <<"creation piece pour vecteur"<<endl;
            Coordonee c(i,j);
            Piece p(c);
            //cout <<"creation piece "<<endl;
            m_listepiece.push_back(p);

            }
        }

}

void Joueur:: initPionJoueur2()
{

     for(int i =8; i<10 ;i++)
     {
         for(int j =0;j<10;j++)
         {
            Coordonee c(i,j);
            Piece p(c);
            m_listepiece.push_back(p);

         }
     }

}


void Joueur :: AfficherPositionPiece()
{
    vector<Piece>::iterator it;

    for(it = m_listepiece.begin(); it!=m_listepiece.end(); ++it)
    {
        //cout <<"iteration position piece"<<endl;
        (*it).infoPiece();   //On accède à l'élément pointé via l'étoile
    }


}

 string Joueur :: getnomJoueur() const
{
    return m_NomduJoueur;
}
vector<Piece> Joueur::getPieceJoueur() const
{
    return m_listepiece;

}
int Joueur:: getIdJoueur() const
{
    return m_idjoueur;
}
