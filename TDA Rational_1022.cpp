#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int gcd(int a, int b)
{
    int rm;
    a = abs(a);
    b = abs(b);
    while(a!=0)
    {
        rm = b%a;
        b=a;
        a=rm;
    }
    return b;
}

int main()
{
    int test, n1, d1, n2, d2, n, d;
    char a, o, b;

    cin>>test;

    while(test--)
    {
        sf("%d %c %d %c %d %c %d",&n1,&a,&d1,&o,&n2,&b,&d2);

        switch(o)
        {
            case '+':
                n = (n1*d2 + n2*d1);
                d = (d1*d2);
                pf("%d/%d = %d/%d\n",n,d,(n/gcd(n,d)),(d/gcd(n,d)));
                break;
            case '-':
                n =  (n1*d2 - n2*d1);
                d = (d1*d2);
                pf("%d/%d = %d/%d\n",n,d,(n/gcd(n,d)),(d/gcd(n,d)));
                break;
            case '*':
                n = (n1*n2);
                d = (d1*d2);
                pf("%d/%d = %d/%d\n",n,d,(n/gcd(n,d)),(d/gcd(n,d)));
                break;
            case '/':
                n = (n1*d2);
                d = (n2*d1);
                pf("%d/%d = %d/%d\n",n,d,(n/gcd(n,d)),(d/gcd(n,d)));
                break;
        }
    }

    return 0;
}
