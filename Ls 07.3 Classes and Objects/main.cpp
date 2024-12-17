// Ls 07.3 Classes and Objects

#include <iostream>
#include <string>
using namespace std;

class bodyProfile
{
public:
    // Name
    void setName(string x)
    {
        name = x;
    }

    string getName()
    {
        return name;
    }
    // address
    void setAddress(string y)
    {
        address = y;
    }

    string getAddress()
    {
        return address;
    }

    // email
    void setEmail(string z)
    {
        email = z;
    }
    string getEmail()
    {
        return email;
    }
    // Age
    void setAge(int a)
    {
        age = a;
    }
    int getAge()
    {
        return age;
    }

private:
    // Variables
    string name, address, email;
    int age;
};

int main()
{
    bodyProfile Body;

    // Tirthraj Mahajan
    Body.setName("Tirthraj Mahajan");
    cout << Body.getName() << endl;

    Body.setEmail("tirthraj@gmail.com");
    cout << Body.getEmail() << endl;

    Body.setAddress("C802 Treasure Park, Sahakar Nagar, Pune 411009");
    cout << Body.getAddress() << endl;

    Body.setAge(16);
    cout << Body.getAge() << endl
         << endl;

    // Bruce Wayne

    Body.setName("Wayne Manor");
    cout << Body.getName() << endl;
    Body.setEmail("brucewayne@batman.com");
    cout << Body.getEmail() << endl;
    Body.setAddress("Wayne Manor, Gotham");
    cout << Body.getAddress() << endl;
    Body.setAge(48);
    cout << Body.getAge() << endl
         << endl;

    return 0;
}