#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int c, q;
    double r;

    sf("%d%d",&c, &q);



    if(c==1)
    {
        r = q*4.00;
    }
    if(c==2)
    {
        r = q*4.50;
    }
    if(c==3)
    {
        r = q*5.00;
    }
    if(c==4)
    {
        r = q*2.00;
    }
    if(c==5)
    {
        r = q*1.50;
    }
    pf("Total: R$ %.2lf\n",r);

    return 0;
}

