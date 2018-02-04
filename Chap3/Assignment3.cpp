// Q. 사용자에게서 두 수를 입력받아 나눗셈을 수행하고 정확한 결과를 출력하는 프로그램을 작성하라. 단, 입락하는 수가 정수일 때와 실수일 때 모두를 테스트할 수 있어야 한다.

#include <iostream>

using namespace std;

int main()
{
    double a ;
    double b ;

    cout << "What's your math score? " ;
    cin >> a ;
    cout << "What's your physics score? " ;
    cin >> b ;

    double mean_score = (a + b)/2 ;
    cout << "The average score is " << mean_score << " poins." <<endl;
}
