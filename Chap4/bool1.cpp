// 동시에 여러 조건 판단할 때 bool 연산자 이용_ bool연산자는 앞에서 사용한 bool 타입과 다르다.

#include <iostream>

// C++에서 not 을 의미하는 기호는 !

using namespace std;

int main()
{
    int num ;
    cout << "Enter number" <<endl ;
    cin >> num;

    if(num != 0)
    {
        cout << " ! 0 evaluates to true" ;
    }
}

