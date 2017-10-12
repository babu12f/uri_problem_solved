#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double x, y;

    sf("%lf%lf",&x, &y);

    if(x==0 && y==0)
    {
        pf("Origem\n");
    }
    else if(y==0)
    {
        pf("Eixo X\n");
    }
    else if(x==0)
    {
        pf("Eixo Y\n");
    }
    else if(x>0 && y>0)
    {
        pf("Q1\n");
    }
    else if(x<0 && y>0)
    {
        pf("Q2\n");
    }
    else if(x<0 && y<0)
    {
        pf("Q3\n");
    }
    else if(x>0 && y<0)
    {
        pf("Q4\n");
    }

    return 0;
}

