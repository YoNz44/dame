#include "Piece.h"

Piece::Piece()
{
    //ctor
}
Piece::Piece(Coordonee X)
{

    m_position=X;

}
void Piece::infoPiece()
{
     cout<<"mes coordonees en abscisse sont "<< (m_position).getabscisse()<<endl;
     cout<<"mes coordonees en ordonnee sont "<< (m_position).getordonnee()<<endl;
     cout << endl;
}
