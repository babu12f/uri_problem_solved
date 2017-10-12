#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double a,b;


    sf("%lf%lf",&a,&b);

    pf("MEDIA = %.5lf\n",((a*3.5+b*7.5)/(3.5+7.5)));

    return 0;
}
