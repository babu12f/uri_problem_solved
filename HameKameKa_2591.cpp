#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

#define debug(x) cout << #x " = " << (x) << endl

using namespace std;

int main()
{
    int test, ha, ka, l, i;
    string s, s1;

    cin>>test;
    getchar();
    while(test--)
    {
        ha=ka=0;
        s1="k";
        cin>>s;
        l = s.length();

        for(i=1; s[i]=='a'; i++){ha++;}
        for(i=i+3; s[i]=='a'; i++){ka++;}
        for(i=1; i<=(ha*ka); i++) s1+="a";

        cout<<s1<<endl;
        s="";
    }

    return 0;
}
