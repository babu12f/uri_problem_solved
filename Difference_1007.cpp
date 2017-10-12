#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int a,b,c,d;


    sf("%d%d%d%d",&a,&b,&c,&d);

    pf("DIFERENCA = %d\n",(a * b - c * d));

    return 0;
}

