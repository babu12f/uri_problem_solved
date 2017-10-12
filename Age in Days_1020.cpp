#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int d, mm=0, dd=0, yy=0;

    sf("%d",&d);

    if(d>=365)
    {
        yy = d/365;
        dd = d%365;
        if(dd>=30)
        {
            mm = dd/30;
            dd = dd%30;
        }
    }
    else if(d>=30)
    {
        mm = d/30;
        dd = d%30;
    }
    else
    {
        dd = d;
    }

    pf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yy,mm,dd);

    return 0;
}
