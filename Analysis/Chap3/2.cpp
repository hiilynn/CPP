#include<iostream>
#include<string>
#include<math.h>

#define PI 3.141592

using namespace std;



int main()
{
    double x ;
    double y ;

    x = sin(30*PI/180.0) ;
    y = cos(30*PI/180.0) ;

    // printf("x = %f  y = %f \n", x, y) ;
    cout << "x = " << x << ", "<< "y = " << y << endl ;
}
