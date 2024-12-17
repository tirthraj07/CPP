#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
public:
    int real, img;
    Complex();
    Complex(int real, int img);
    Complex operator+(Complex No2);
    void Print();
};

#endif