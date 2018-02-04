/*참과 거짓을 비교하고 싶은 대상이 2개 이상일 때 else if문을 사용한다. if문이 참일 때 다음의 조건들은 무시된다. 단, if문이 거짓이면 else if문이 시행되고 이 것도 거짓일 때 else문이 동작을 수행한다.
 else if도  if와 마찬가지로 (조건) 을 수반하여 쓴다. */

#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter a number: \n";
    cin >> num ;

    if (num < 0)
    {
        cout << "You entered a negative number \n" ;
    }
    else if ( num == 0)
    {
        cout << "You entered zero \n" ;
    }
    else
    {
        cout <<"Youu entered a positive number \n";
    }
}
