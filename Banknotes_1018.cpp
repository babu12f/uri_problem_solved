#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    int am, h, f, tw, te, fiv, two, one, amf;
    h=f=tw=te=fiv=two=one=0;

    sf("%d",&am);
    amf = am;
    if(am>=100)
    {
        h = am/100;
        am %= 100;
    }
    if(am>=50)
    {
        f = am/50;
        am %= 50;
    }
    if(am>=20)
    {
        tw = am/20;
        am %= 20;
    }
    if(am>=10)
    {
        te = am/10;
        am %= 10;
    }
    if(am>=5)
    {
        fiv = am/5;
        am %= 5;
    }
    if(am>=2)
    {
        two = am/2;
        am %= 2;
    }
    if(am>=1)
    {
        one = am;
    }

    pf("%d\n",amf);
    pf("%d nota(s) de R$ 100,00\n",h);
    pf("%d nota(s) de R$ 50,00\n",f);
    pf("%d nota(s) de R$ 20,00\n",tw);
    pf("%d nota(s) de R$ 10,00\n",te);
    pf("%d nota(s) de R$ 5,00\n",fiv);
    pf("%d nota(s) de R$ 2,00\n",two);
    pf("%d nota(s) de R$ 1,00\n",one);

    return 0;
}

