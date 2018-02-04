#include<iostream>
#include<string>
#include<cmath>

using namespace std;
int main()
{
     int x, y ;

     x = 100 ;
     y = 200 ;

    printf("x = %d \n", x) ;
    printf("x = 0x%x \n", x) ;
    printf("y = %d \n", y) ;
    printf("y = 0x%x \n", y) ;

    int z ;
    z = pow(16, 3)*10 + pow(16, 2)*9 + 16*3 + 12   ;
    cout << z<< endl;
    printf("z = 0x%x \n", z) ;
}
