#include <bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

/*vector<string> split(char str[], char ch[])
{
    vector<string> v(101);
    int c = 0;

    char* pch;
    pch = strtok (str,ch);
    while (pch != NULL)
    {
        v[c++] = pch;
        pch = strtok (NULL, ch);
    }

    return v;
}*/


int count_char(string s, char ch)
{
    int l = s.length(), count=0;
    for(int i=0; i<l; i++)
    {
        if(s[i]==ch)count++;
    }
    return count;
}


int main()
{
    int test, i, j, k, l, l1, l2, l3, m, n, max, ca, cp, cm, total;
    float per;
    char str[1650];
    string s;
    string sname[101];
    string saten[101];
    bool f;

    cin>>test;

    while(test--)
    {
        f=true;

        cin>>n;

        for(i=0; i<n; i++)
        {
            cin>>sname[i];
        }
        for(i=0; i<n; i++)
        {
            cin>>saten[i];
        }

        for(i=0; i<n; i++)
        {
            s = (string)saten[i];
            ca = count_char(s,'A');
            cp = count_char(s,'P');
            total = ca+cp;
            per = ((total*75)/100.0);

            if(cp>=per){}
            else
            {
                if(f)
                {
                    cout<<sname[i];
                    f=false;
                }
                else
                {
                    cout<<" "<<sname[i];
                }
            }
        }
        cout<<endl;
    }


    return 0;
}




