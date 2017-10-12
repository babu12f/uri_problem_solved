#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double r, pi=3.14159;

    sf("%lf",&r);
    pf("A=%.4lf\n",(pi*(r*r)));

    return 0;
}
