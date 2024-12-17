// Ls 07.8 Classes Practice

#include "FC.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
    FC club1("Chelsea", "Premier League");
    FC club2("Manchester United", "Premier League");
    FC club3("Barcalona", "La Liga");
    FC club4("Real Madrid", "La Liga");
    FC club5("Bayern Munich", "Bundesliga");
    FC club6("Dortmund", "Bundesliga");
    FC club7("PSG", "League 1");
    FC club8("Juventus", "Serie A");

    cout << club1.getName() << ": " << club1.getLeague() << endl;
    cout << club2.getName() << ": " << club2.getLeague() << endl;
    cout << club3.getName() << ": " << club3.getLeague() << endl;
    cout << club4.getName() << ": " << club4.getLeague() << endl;
    cout << club5.getName() << ": " << club5.getLeague() << endl;
    cout << club6.getName() << ": " << club6.getLeague() << endl;
    cout << club7.getName() << ": " << club7.getLeague() << endl;
    cout << club8.getName() << ": " << club8.getLeague() << endl;

    return 0;
}