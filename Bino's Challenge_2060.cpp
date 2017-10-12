#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int n, i, j, k, l, two, three, four, five;

    two=three=four=five=0;

    cin>>n;

    for(i=1; i<=n; i++)
    {
        cin>>j;

        if(j%2==0)two++;
        if(j%3==0)three++;
        if(j%4==0)four++;
        if(j%5==0)five++;
    }
    pf("%d Multiplo(s) de 2\n",two);
    pf("%d Multiplo(s) de 3\n",three);
    pf("%d Multiplo(s) de 4\n",four);
    pf("%d Multiplo(s) de 5\n",five);

    return 0;
}

