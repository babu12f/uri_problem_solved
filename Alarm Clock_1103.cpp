#include<bits/stdc++.h>

#define sf scanf
#define pf printf
#define ll long long

using namespace std;

int main()
{
    int h1, m1, h2, m2, total, hh, mm;


    while(cin>>h1>>m1>>h2>>m2 && (h1>0 || m1>0 || h2>0 || m2>0))
    {
        h1++; m1++; h2++; m2++;

        if(h2>h1)
        {
            hh = h2-h1;

            if(m2<m1)
            {
                hh--;
                mm=(60-m1)+m2;
            }
            else
            {
                mm=m2-m1;
            }
        }
        else if(h2==h1)
        {
            hh = 24;

            if(m2>m1)
            {
                hh=0;
                mm=m2-m1;
            }
            else
            {
                if(m2<=m1){ hh--; mm=(60-m1)+m2;}
                else mm=m2-m1;
            }
        }
        else
        {
            hh =(24-h1)+h2;

            if(m2<m1)
            {
                hh--;
                mm=(60-m1)+m2;
            }
            else
            {
                mm=m2-m1;
            }
        }

        total = (hh*60)+mm;
        cout<<total<<endl;
    }

    return 0;
}

