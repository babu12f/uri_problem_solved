#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

#define pf printf
#define sf scanf

int main()
{
    double n1, n2, n3, n4, avg;

    sf("%lf%lf%lf%lf",&n1, &n2, &n3, &n4);

    avg = ((n1*2)+(n2*3)+(n3*4)+n4)/10;

    pf("Media: %.1lf\n",avg);
    if(avg>=7)
    {
        pf("Aluno aprovado.\n");
    }
    else if(avg<5)
    {
        pf("Aluno reprovado.\n");
    }
    else if(avg>=5 && avg<7)
    {
        pf("Aluno em exame.\n");
        sf("%lf",&n1);
        pf("Nota do exame: %.1lf\n",n1);

        avg = avg+n1;
        avg = avg/2;

        if(avg>=5)
        {
            pf("Aluno aprovado.\n");
        }
        if(avg<5)
        {
            pf("Aluno reprovado.\n");
        }
        pf("Media final: %.1lf\n",avg);
    }

    return 0;
}

