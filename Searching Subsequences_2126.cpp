#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int test=1, count;
    string s, s1;
    size_t n_pos, last;

    while(getline(cin,s))
    {
        getline(cin,s1);

        count = 0;
        n_pos = s1.find(s, 0);
        while(n_pos != string::npos)
        {
            count++;
            n_pos = s1.find(s, n_pos+1);
        }
        last = s1.rfind(s);

        pf("Caso #%d:\n",test++);

        if(count>0)
        {
            pf("Qtd.Subsequencias: %d\n",count);
            pf("Pos: %d\n",last+1);
        }
        else
        {
            pf("Nao existe subsequencia\n");
        }
        cout<<endl;
    }

    return 0;
}
