#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int r, c, r1, c1, r2, c2, i, j, x, mov;

    while(cin>>r>>c)
    {
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin>>x;
                if(x==2){r2=i; c2=j;}
                if(x==1){r1=i; c1=j;}
            }
        }
        if(r1==r2){mov=abs(c2-c1);}
        else if(c1==c2){mov=abs(r2-r1);}
        else
        {
            mov = abs(r2-r1);
            mov += abs(c2-c1);
        }
        cout<<mov<<endl;
    }


    return 0;
}


