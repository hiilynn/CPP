#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age1;
    int age2;

    cout <<"[Who is older]" << endl ;
    cout << "How old is 1?" << endl ;
    cin >> age1 ;
    cout << "How old is 2?" << endl ;
    cin >> age2 ;


    if (age1 > 100 && age2 > 100)
    {
        cout << "Have a good day!" ;
    }
    else if (age1 > age2)
    {
        cout << "1 is older than 2" ;
    }
    else if(age1 == age2)
    {
        cout << "you are the same age" ;
    }
    else
    {
        cout << "2 is older than 1" ;
        return 0;
    }
}
