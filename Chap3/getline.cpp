#include <iostream>
#include <string>

using namespace std;

int main()
{
    string my_st;

    my_st = "Hello, world" ;
    getline(cin, my_st, ',');
    cout<< my_st;
}
