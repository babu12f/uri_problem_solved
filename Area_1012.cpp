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
    double a, b, c;
    int  i, j, n;

    cin>>a>>b>>c;

    pf("TRIANGULO: %.3f\n",(a*c*.5));
    pf("CIRCULO: %.3f\n",(c*c*3.14159));
    pf("TRAPEZIO: %.3f\n",((a+b)/2)*c);
    pf("QUADRADO: %.3f\n",(b*b));
    pf("RETANGULO: %.3f\n",(a*b));


    return 0;
}


