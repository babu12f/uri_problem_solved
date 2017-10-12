#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

bool check_cor(string s[], int l, string pr)
{
    for(int i=0; i<l; i++)
    {
        if(s[i].compare(pr)==0)return true;
    }
    return false;
}

int main()
{
    int test, i, j, k, l, m, n,sum, panal, c;
    string correct[301], judge;
    int incor[26];
    char pname;


    while(cin>>test && test!=0)
    {
        sum=0;
        panal = 0;
        c = 0;
        memset(incor, 0, sizeof(incor));

        for(i=0; i<test; i++)
        {
            cin>>pname;
            cin>>n;
            cin>>judge;
            if(judge == "correct")
            {
                //cout<<(int)pname - 65<<endl;
                if(incor[(int)pname - 65]==0)
                c++;
                sum += n;
                sum += incor[(int)pname - 65];
            }
            else
            {
                incor[(int)pname - 65] += 20;
            }
        }
        cout<<c<<" "<<sum<<endl;
    }


    return 0;
}




