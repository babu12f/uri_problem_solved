#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n, t, led[10] = {6,2,5,5,4,5,6,3,7,6}, l, i, ch, sum;
    string s;

    cin>>t;

    while(t--)
    {
        sum = 0;
        cin>>s;
        l = s.length();

        for(i=0; i<l; i++)
        {
            ch = s[i] - '0';
            sum += led[ch];
        }
        cout<<sum<<" leds"<<endl;
    }


    return 0;
}


