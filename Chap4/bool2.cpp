// 동시에 여러 조건 판단할 때 bool 연산자 이용_ bool연산자는 앞에서 사용한 bool 타입과 다르다.

#include <iostream>

// C++에서 not 을 의미하는 기호는 !

using namespace std;

/*int main()
{
    int num ;
    cout << "Enter number" <<endl ;
    cin >> num;

    if(num != 0)
    {
        cout << " ! 0 evaluates to true" ;
    }
}
*/

// bool and -> 두 입력이 모두 참일 때 참을 리턴. bool은 논리 연산자! 1==2이다를 돌리면 false라고 판단해줌!

#include <string>

/*
int main()
{
    int num;
    string name;

    cout << "Enter your age" << endl;
    cin >> num;
    cout << "Enter your name" << endl;
    cin >> name;

    if (num == 26 && name =="Teryah" )
    {
    cout << "Hi!" ;
    }
    else
    {
    cout << "Denied" ;
        return 0; //리턴의 위치 중요!
    }
}
*/

// 처음에 틀렸는데 굳이 두번째까지 입력한 후 거짓임이 판명되는 것은 답답하다. 이때 첫 번째 수식이 거짓일 때 수행이 정지되게 하는 방법이 있는데 이를 지름길 논리(short circuit)라고 한다.

/*
int main()
{
    int x;
    cout <<"Enter number: "<< endl;
    cin >> x;

    if (x != 0 && 10 / x<2)
    {
        cout << "10/x is less than 2" ;
        }
    }
}
*/

int main()
{
    int x;
    cout << "Enter number: " << endl;
    cin >> x;

    if (x != 0)
    {
        if(10/x < 2)
        {
            cout << "10/2 is less than 2" ;
        }
    }
}

//bool or 연산자는 기호 || 를 사용한다.
