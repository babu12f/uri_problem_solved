#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int bin_des(int num)
{
    int bin, dec = 0, rem, base = 1;

    while (num > 0)
    {
        rem = num % 10;
        dec = dec + rem * base;
        base = base * 2;
        num = num / 10;
    }
    return dec;
}

int str_to_bin(string s)
{
    int l = s.length(), bin=0;

    for(int i=0; i<l; i++)
    {
        if(s[i]=='-')
        {
            bin = (bin * 10)+0;
        }
        else if(s[i]=='*')
        {
            bin = (bin * 10)+1;
        }
    }
    return bin_des(bin);
}

int main()
{
    int sum;
    string s, s1;

    for(int i=1; i<=3; i++)
    {
        sum=0;
        while(1)
        {
            getline(cin, s);
            if(s=="caw caw")
            {
                cout<<sum<<endl;
                break;
            }
            else
            sum += str_to_bin(s);
        }
    }

    return 0;
}


