#include <iostream>
#include "Complex.h"
using namespace std;

Complex::Complex() {};
Complex::Complex(int real, int img) : real(real), img(img) {};
Complex Complex::operator+(Complex No2)
{
    Complex Total;
    Total.real = this->real + No2.real;
    Total.img = this->img + No2.img;
    return Total;
}
void Complex::Print()
{
    cout << real << "+" << img << "i" << endl;
}
