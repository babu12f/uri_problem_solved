#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double a, b, c, r1, r2;

    sf("%lf%lf%lf",&a, &b, &c);

    if(((b*b)-(4*a*c))>-1&&(2*a)!=0)
    {
        r1 = (-b+sqrt((b*b)-(4*a*c)))/(2*a);
        r2 = (-b-sqrt((b*b)-(4*a*c)))/(2*a);

        pf("R1 = %.5lf\n",r1);
        pf("R2 = %.5lf\n",r2);
    }
    else
    {
        pf("Impossivel calcular\n");
    }

    return 0;
}

