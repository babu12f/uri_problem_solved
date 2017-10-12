#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <functional>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    double a, b, c, arr[3];
    int  i, j, n;

    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr, arr+3, greater<double>());
    a = arr[0];
    b = arr[1];
    c = arr[2];

    if( a >= b+c )
        cout<<"NAO FORMA TRIANGULO"<<endl;
    else if( ( a * a ) == ( b * b ) + ( c * c ) )
        cout<<"TRIANGULO RETANGULO"<<endl;
    else if( ( a * a ) > ( b * b ) + ( c * c ) )
        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    else if( ( a * a ) < ( b * b ) + ( c * c ) )
        cout<<"TRIANGULO ACUTANGULO"<<endl;
    if( a==b && a==c && b==c )
        cout<<"TRIANGULO EQUILATERO"<<endl;
    else if( ( a==b && a != c ) || ( b==c && b != a ) || ( c==a && a != b ) )
        cout<<"TRIANGULO ISOSCELES"<<endl;

    return 0;
}

