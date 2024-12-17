// Ls 32.6 User Defined Exceptions
// https://www.youtube.com/watch?v=Ix05fozWn0A&list=PLfVsf4Bjg79Cx42Myce8bIg1nVBVSFKyx&index=6&ab_channel=LearningLad

#include <iostream>
#include <stdexcept>
using namespace std;

class Overspeed : public exception
{
private:
    int speed;

public:
    void setSpeed(int speed)
    {
        this->speed = speed;
    }
    const char *getSpeed()
    {
        return "Speed of Car is >= 100";
    }
    const char *what()
    {
        return "check your car speed!\n";
    }
};

class Car
{
private:
    int speed;

public:
    Car()
    {
        cout << "Car is ready to go" << endl;
        speed = 0;
        cout << "Current Speed: = " << speed << endl;
    }
    void accelerate()
    {
        speed += 10;
        if (speed >= 100)
        {
            Overspeed s;
            s.setSpeed(speed);
            throw s;
        }
    }
    void displaySpeed()
    {
        cout << "Current Speed is: " << speed << endl;
    }
};

int main()
{
    try
    {
        Car c;
        char temp;
        for (;;)
        {
            cout << "wanna accelerate? (y/n) " << endl;
            cin >> temp;
            if (temp == 'y')
            {
                c.accelerate();
                c.displaySpeed();
            }
            else
            {
                c.displaySpeed();
            }
        }
    }
    catch (Overspeed s)
    {
        cout << "Overspeed Error: " << s.what() << s.getSpeed();
    }
}