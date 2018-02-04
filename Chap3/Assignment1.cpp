#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first_name;
    string last_name;

    cout <<"What's your first name? ";
    cin >> first_name ;
    cout << "What's your last name? ";
    cin >> last_name;
    cout<<"what's your full name? ";
    string full_name = first_name + " " + last_name;
    cout << full_name <<endl;
}
