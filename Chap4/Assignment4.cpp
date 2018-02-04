#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user ;
    string PW ;

    cout << "Enter your name: " ;
    cin >> user ;

    if(user == "user1")
    {
        cout << "Enter your password: " ;
        cin >> PW ;

        if(PW == "aaaa")
        {
            cout << "Welcome!" ;
        }
        else
        {
            cout << "<<Please check again.>>" ;
        }
    }
    else if(user == "user2")
    {
        cout << "Enter your password: " ;
        cin >> PW ;

        if(PW == "bbbb")
        {
            cout << "Welcome!" ;
        }
        else
        {
            cout << "<<Please check again.>>" ;
        }
    }
    else
    {
        cout << "<<Please check again.>>" ;
    }
}
