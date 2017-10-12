#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double a,b,c;


    sf("%lf%lf%lf",&a,&b,&c);

    pf("MEDIA = %.1lf\n",((a*2+b*3+c*5)/10));

    return 0;
}
