#ifndef COORDONEE_H
#define COORDONEE_H


class Coordonee
{
    public:
        Coordonee();
        Coordonee(int abscisse, int ordonnee);
        int getabscisse()const;
        int getordonnee()const;

    protected:

    private:
        int m_abscisse;
        int m_ordonnee;
};

#endif // COORDONÈE_H
