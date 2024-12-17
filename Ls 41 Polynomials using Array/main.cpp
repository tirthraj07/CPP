// Ls 41 Polynomials using Array

#include <iostream>
using namespace std;

class Term
{
public:
    int degree, coeff;
    Term() {}
    Term(int degree, int coeff) : degree(degree), coeff(coeff) {}
    friend class Polymonial;
};

class Polynomial
{
private:
    int terms;
    Term *poly;

public:
    Polynomial() : terms(0), poly(nullptr) {}
    Polynomial(int terms) : terms(terms)
    {
        poly = new Term[terms];
    }

    Polynomial(const Polynomial &other) : terms(other.terms)
    {
        poly = new Term[terms];
        for (int i = 0; i < terms; i++)
        {
            poly[i].degree = other.poly[i].degree;
            poly[i].coeff = other.poly[i].coeff;
        }
    }

    Polynomial &operator=(const Polynomial &other)
    {
        if (this == &other)
        {
            return *this;
        }

        terms = other.terms;
        delete[] poly; // Delete the old data
        poly = new Term[terms];
        for (int i = 0; i < terms; i++)
        {
            poly[i].degree = other.poly[i].degree;
            poly[i].coeff = other.poly[i].coeff;
        }
        return *this;
    }

    ~Polynomial()
    {
        if (poly != nullptr)
        {
            delete[] poly;
        }
    }
    void display();
    void inputPoly();
    Polynomial add(Polynomial P);
};

void Polynomial::display()
{
    for (int i = 0; i < terms; i++)
    {
        if (this->poly[i].coeff == 0)
        {
            continue;
        }
        else if (this->poly[i].coeff != 1)
        {
            cout << this->poly[i].coeff;
        }

        if (this->poly[i].degree != 0 && this->poly[i].degree != 1)
        {
            cout << "x^" << this->poly[i].degree;
        }
        else if (this->poly[i].degree == 1)
        {
            cout << "x";
        }
        if (i != terms - 1)
        {
            cout << " + ";
        }
    }
    cout << endl;
}

void Polynomial::inputPoly()
{
    cout << "Enter Number of terms" << endl;
    cin >> this->terms;
    if (poly != nullptr)
    {
        delete[] poly;
    }
    poly = new Term[this->terms];
    int degree = 0, coeff = 0;
    for (int i = 0; i < this->terms; i++)
    {
        cout << "Coeff: ";
        cin >> coeff;
        cout << "\nDegree: ";
        cin >> degree;
        cout << endl;
        this->poly[i].degree = degree;
        this->poly[i].coeff = coeff;
    }
}
Polynomial Polynomial::add(Polynomial P)
{
    int n = this->terms;
    int m = P.terms;
    int maxTerms = m + n;
    Polynomial c(maxTerms);
    for (int i = 0; i < m + n; i++)
    {
        c.poly[i].coeff = 0;
        c.poly[i].degree = 0;
    }

    int i = 0, j = 0, k = 0;

    while (i < n && j < m)
    {
        if (this->poly[i].degree == P.poly[j].degree)
        {
            c.poly[k].coeff = this->poly[i].coeff + P.poly[j].coeff;
            c.poly[k].degree = this->poly[i].degree;
            i++;
            j++;
        }
        else if (this->poly[i].degree > P.poly[j].degree)
        {
            c.poly[k].coeff = this->poly[i].coeff;
            c.poly[k].degree = this->poly[i].degree;
            i++;
        }
        else if (this->poly[i].degree < P.poly[j].degree)
        {
            c.poly[k].coeff = P.poly[j].coeff;
            c.poly[k].degree = P.poly[j].degree;
            j++;
        }
        k++;
    }

    while (i < n)
    {
        c.poly[k].coeff = this->poly[i].coeff;
        c.poly[k].degree = this->poly[i].degree;
        i++;
        k++;
    }

    while (j < m)
    {
        c.poly[k].coeff = P.poly[j].coeff;
        c.poly[k].degree = P.poly[j].degree;
        j++;
        k++;
    }
    c.terms = k;
    return c;
}

int main()
{
    Polynomial P1;
    Polynomial P2;
    Polynomial P3;
    P1.inputPoly();
    P1.display();
    P2.inputPoly();
    P2.display();
    P3 = P1.add(P2);
    P3.display();

    return 0;
}

/*
Enter Number of terms
5
Coeff: 4

Degree: 4

Coeff: 3

Degree: 3

Coeff: 2

Degree: 2

Coeff: 1

Degree: 1

Coeff: 10

Degree: 0

4x^4 + 3x^3 + 2x^2 + x + 10
Enter Number of terms
3
Coeff: 3

Degree: 100

Coeff: 3

Degree: 3

Coeff: 100

Degree: 0

3x^100 + 3x^3 + 100

>>> 3x^100 + 4x^4 + 6x^3 + 2x^2 + x + 110
*/
