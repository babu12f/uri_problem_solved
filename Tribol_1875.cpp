#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, gole, r, g, b, i;
    char ch1, ch2;

    cin>>test;

    while(test--)
    {
        cin>>gole;
        r=g=b=0;

        getchar();
        for(i=1; i<=gole; i++)
        {
            cin>>ch1>>ch2;

            if( (ch1=='R' && ch2=='G') || (ch1=='G' && ch2=='B') || (ch1=='B' && ch2=='R') )
            {
                if(ch1=='R') r+=2;
                if(ch1=='G') g+=2;
                if(ch1=='B') b+=2;
            }
            else
            {
                if(ch1=='R') r+=1;
                if(ch1=='G') g+=1;
                if(ch1=='B') b+=1;
            }
        }

        if( (r==b && b==g) )
        {
            cout<<"trempate"<<endl;
        }
        else
        {
            if(r>b && r>g)cout<<"red"<<endl;
            else if(b>r && b>g) cout<<"blue"<<endl;
            else if(g>r && g>b) cout<<"green"<<endl;
            else cout<<"empate"<<endl;
        }
    }

    return 0;
}

