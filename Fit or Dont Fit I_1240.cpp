#include<bits/stdc++.h>
#include <string>

#define pf printf
#define sf scanf

using namespace std;

bool check_fit(string s1, string s2)
{
    int l1, l2, j, i;
    l1 = s1.length();
    l2 = s2.length();

    if(l1<l2) return false;

    l1--;

    for(i=l2-1; i>=0; i--, l1--)
    {
        if(s2[i] != s1[l1]) return false;
    }
    return true;
}

int main()
{
    int test, n1, n2;
    string s1, s2;
    stringstream ss;

    cin>>test;

    while(test--)
    {
        cin>>n1>>n2;

        ss.str("");
        ss << n1;
        s1 = ss.str();

        ss.str("");
        ss << n2;
        s2 = ss.str();

        if(check_fit(s1, s2)) cout<<"encaixa"<<endl;
        else cout<<"nao encaixa"<<endl;
    }

    return 0;
}

