#include <iostream>
#include <string>

using namespace std;

int main()
{
    string password;

    cout << "Enter your password: " << "\n" ;
    getline( cin, password, '\n');
    // cin >> password ; //와 getline은 같은 역할인가?

    if (password == "xyzzy")
    {
        cout <<"Access allowed" << "\n" ;
    }
    else
    {
        cout << "Bad password. Denied access!" << "\n" ;
        // return은 프로그램을 중단할 수 있는 편리나 방법이다.
    }
     return 0;
    //계속 진행한다. 리턴을 쓰고 안쓰고의 차이를 모르겠다.
}

