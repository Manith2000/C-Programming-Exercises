/******************** Practicing Variables & Constants
**********************/




#include <iostream>

using namespace std;

int main() 

//Cleaning Service 
{   int s{0}, l{0};
    cout << "Welcome to our service!\n"<< "How many small and big rooms cleaned? Please type respectively: ";
    cin >> s >> l;
    const double ps{2.50}, pl{5.00};
    cout << "Price per small room: $" << ps;
    cout << "\nPrice per large room: $" << pl;
    double t = (ps*s) + (pl*l);
    cout <<"\nTotal Cost: $" << t;
    return 0;
}
