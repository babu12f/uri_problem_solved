#include<bits/stdc++.h>

using namespace std;

int digit[10]={0};

void dcount(int n)
{
    while(n!=0)
    {
        digit[n%10]++;
        n /= 10;
    }
}

int main()
{
    int a, b, i;

    while(cin>>a>>b && (a!=0 &&b !=0))
    {
        for(i=a; i<=b; i++)
        {
            dcount(i);
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",digit[0],digit[1],digit[2],digit[3],digit[4],digit[5],digit[6],digit[7],digit[8],digit[9]);
        fill_n(digit, 10, 0);
    }

    return 0;
}
