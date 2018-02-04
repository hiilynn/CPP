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


//단순히 어떤 동작을 시행하는데에 조건을 주고 싶은 거라면, if문만 사용해도 된다. 하지만 만약 테스트의 참과 거짓에 따라 각 다른 동작을 수행하고자 한다면, else문을 더해야 한다.
