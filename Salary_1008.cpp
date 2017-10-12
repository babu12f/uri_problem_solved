#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int a,b;
    double c;


    sf("%d%d%lf",&a,&b,&c);

    pf("NUMBER = %d\nSALARY = U$ %.2lf\n",a,(b*c));

    return 0;
}


