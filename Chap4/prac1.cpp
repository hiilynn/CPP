#include<iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    bool is_x_two = x ==2; //비교에는 ==을 사용한다.

    if (is_x_two)
    {
        cout << "correct!" ;//x가 2이므로 어떤 동작을 수행한다.
    }
}
