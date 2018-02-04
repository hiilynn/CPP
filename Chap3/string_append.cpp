#include <iostream>
#include <string>

using namespace std;

int main()
{
    string user_first_name;
    string user_last_name;

    cout << "Please enter your first name: ";
    cin >> user_first_name;
    cout << "Please enter your last name: ";
    cin >> user_last_name;
    string user_full_name = user_first_name + " "+ user_last_name; //공백 하나는 이름사이 띄어쓰기를 나타낸다.
    cout << "Your name is: " <<user_full_name << endl;
}
