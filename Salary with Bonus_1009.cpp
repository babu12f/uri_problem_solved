#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    char name[10];
    double a,b;


    sf("%s%lf%lf",&name,&a,&b);

    pf("TOTAL = R$ %.2lf\n",(a+((b*15)/100)));

    return 0;
}


