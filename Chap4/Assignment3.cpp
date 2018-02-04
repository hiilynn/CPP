#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "[THE FOUR FUNDAMENTAL ARITHMETIC CALCULATOR]" << "\n";

    double x ;
    double y ;

    cin >> x >> y ;
    cout << " Which operator do you want? Pl(+), Ma(-), Pr(*), Di(/): \n" ;

    string X ;
    cin >> X ;

    if(X == "Pl")
        {
        cout << x+y << endl;
        }
    else if(X == "Ma")
        {
        cout << x-y << endl;
        }
    else if(X == "Pr")
        {
        cout << x*y << endl;
        }
    else if(X == "Di")
        {
        cout << x/y << endl;
        }
    else
        {
        cout << "<Please check again.>" ;
        }
}
