#include "Joueur.h"

using namespace std;


Joueur::Joueur()
{
    m_NomduJoueur="Lambda";
     vector<Piece> m_listepiece(20);


}
Joueur::Joueur(string NomJoueur)
{
    m_NomduJoueur=NomJoueur;
     vector<Piece> m_listepiece(20);
}

 string Joueur :: getnomJoueur() const
{
    return m_NomduJoueur;
}
vector<Piece> Joueur::getPieceJoueur() const
{
    return m_listepiece;

}
