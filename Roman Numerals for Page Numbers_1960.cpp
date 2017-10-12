#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

string int_to_roman(int a)
{
    //work till 3999
    string ans;
    string M[] = {"","M","MM","MMM"};
    string C[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
    string X[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
    string I[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
    ans = M[a/1000]+C[(a%1000)/100]+X[(a%100)/10]+I[(a%10)];
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<<int_to_roman(n)<<endl;

    return 0;
}
