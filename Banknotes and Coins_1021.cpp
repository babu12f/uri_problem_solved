#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double inputam, r;
    int am, h, f, tw, te, fiv, two, amf, one, pfif, p2fiv, pte, pzfiv, pzone, rem;
    h=f=tw=te=fiv=two=one=pfif=p2fiv=pte=pzfiv=pzone=0;

    sf("%lf",&inputam);
    am = inputam;
    r = inputam - am;
    rem = r*100;

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

    if(rem>=50)
    {
        pfif = rem/50;
        rem %= 50;
    }
    if(rem>=25)
    {
        p2fiv = rem/25;
        rem = rem%25;
    }
    if(rem>=10)
    {
        pte = rem/10;
        rem %= 10;
    }
    if(rem>=5)
    {
        pzfiv = rem/5;
        rem %= 5;
    }
    if(rem>=1)
    {
        pzone = rem;
    }

    pf("NOTAS:\n");
    pf("%d nota(s) de R$ 100.00\n",h);
    pf("%d nota(s) de R$ 50.00\n",f);
    pf("%d nota(s) de R$ 20.00\n",tw);
    pf("%d nota(s) de R$ 10.00\n",te);
    pf("%d nota(s) de R$ 5.00\n",fiv);
    pf("%d nota(s) de R$ 2.00\n",two);

    pf("MOEDAS:\n");
    pf("%d moeda(s) de R$ 1.00\n",one);
    pf("%d moeda(s) de R$ 0.50\n",pfif);
    pf("%d moeda(s) de R$ 0.25\n",p2fiv);
    pf("%d moeda(s) de R$ 0.10\n",pte);
    pf("%d moeda(s) de R$ 0.05\n",pzfiv);
    pf("%d moeda(s) de R$ 0.01\n",pzone);

    return 0;
}

