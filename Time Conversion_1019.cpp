#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int s, hh=0, mm=0, ss=0;

    sf("%d",&s);

    if(s>=3600)
    {
        hh = s/60;
        ss = s%60;
        ss = ss + (hh%60)*60;
        hh = hh/60;
        if(ss>=60)
        {
            mm = ss/60;
            ss = ss%60;
        }
    }
    else if(s>=60)
    {
        mm = s/60;
        ss = s%60;
    }
    else
    {
        ss = s;
    }

    pf("%d:%d:%d\n",hh,mm,ss);

    return 0;
}

