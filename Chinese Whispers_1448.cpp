#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int test, i, j, k, l, m, n, count, c1,c2,c3, win;
    bool f,f1=false;
    string s1,s2,s3;

    cin>>test;
    getchar();

    for(i=1; i<=test; i++)
    {
        getline(cin,s1);
        getline(cin,s2);
        getline(cin,s3);

        l = s1.length();
        win=c2=c3=0;
        f=true;

        for(j=0; j<l; j++)
        {
            if(s1[j]==s2[j]) c2++;
            if(s1[j]==s3[j]) c3++;
            if( ( (s1[j]==s2[j]&&s1[j]!=s3[j]) || (s1[j]!=s2[j]&&s1[j]==s3[j]) ) && f)
            {
                if(s1[j]==s2[j]) win = 1;
                else win = 2;
                f=false;
            }
        }
        cout<<"Instancia "<<i<<endl;
        if(c2>c3)
        {
            cout<<"time 1"<<endl;
        }
        else if(c3>c2)
        {
            cout<<"time 2"<<endl;
        }
        else
        {
            if(win==1)cout<<"time 1"<<endl;
            else if(win==2)cout<<"time 2"<<endl;
            else cout<<"empate"<<endl;
        }
        cout<<endl;
    }

    return 0;
}

