#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int calc_char_value(string s, int index)
{
    int l = s.length(), sum = 0;

    for(int i=0; i<l; i++)
    {
        sum += (26 - ( 91 - s[i] )) + i + index;
    }
    return sum;
}

int main()
{
    int test, n, i, j, k, l, sum;
    string store[100], s, s1, s2;

    cin>>test;

    while(test--)
    {
        cin>>n;
        getchar();

        sum = 0;
        for(i=0; i<n; i++)
        {
            cin>>store[i];
        }

        for(i=0; i<n; i++)
        {
            sum += calc_char_value(store[i], i);
        }
        cout<<sum<<endl;
    }

    return 0;
}


