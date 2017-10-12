#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double num;

    sf("%lf",&num);

    if(num>=0 && num<=25)
    {
        pf("Intervalo [0,25]\n");
    }
    else if(num>25 && num<=50)
    {
        pf("Intervalo (25,50]\n");
    }
    else if(num>50 && num<=75)
    {
        pf("Intervalo (50,75]\n");
    }
    else if(num>75 && num<=100)
    {
        pf("Intervalo (75,100]\n");
    }
    else
    {
        pf("Fora de intervalo\n");
    }


    return 0;
}

