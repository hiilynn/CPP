#include<iostream>
#include<string>
#include<math.h>

#define RAD(x) ((x)*3.141592/180) //메크로 기능, 사용자 정의형 함수로 작성하는 것보다 처리를 빠르게 할 수 있다.

using namespace std;

int main()
{
    double x ;
    double y ;

    x = sin(RAD(30)) ;
    y = cos(RAD(30)) ;

    cout << "x = " << x << ", " << "y = " << y << endl ;
}
