#include <iostream>

using namespace std;

int main()
{
    int first_argument /*declare variable*/;
    int second_argument;
    cout << "Enter first argument: " /*this is an output*/;
    cin >> first_argument /*variable is behind of cin operator and >> assigns direction. And this is a number*/;
    cout <<"Enter second_argument: ";
    cin >> second_argument;
    cout <<first_argument << "*" << second_argument
    << "=" << first_argument * second_argument
    <<endl;
}

