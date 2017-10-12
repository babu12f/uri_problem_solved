#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    float count=0;
    int age, sum=0;

    while(cin>>age)
    {
        if(age<0) break;
        count += 1.0;
        sum += age;
    }

    pf("%.2f\n", (sum/count));

    return 0;
}
