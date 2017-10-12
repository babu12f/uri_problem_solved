#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    string s, s1;

    cin>>s;

    s1 = s;
    s1.erase(remove(s1.begin(), s1.end(), '0'), s1.end());

    if(s1.length()%2 ==0) s += "0";
    else s += "1";

    cout<<s<<endl;

    return 0;
}
