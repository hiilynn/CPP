#include <iostream>

using namespace std;

int main()
{
    int password ;

    cout << "Enter your password: " << endl;
    cin >> password ;

    if (password != 1234)
    {
        cout <<"Denied." << endl ;
    }
}
