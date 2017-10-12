#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    int m , d, sum, i;
    int md[]={31,29,31,30,31,30,31,31,30,31,30,31};

    while(sf("%d%d",&m, &d)!=EOF)
    {
        sum = 0;
        if(m==12 && d==25) cout<<"E natal!"<<endl;
        else if(m==12 && d==24) cout<<"E vespera de natal!"<<endl;
        else if(m==12 && d>25) cout<<"Ja passou!"<<endl;
        else
        {
            for(i=0; i<m-1; i++) sum+=md[i];
            sum+= d;

            cout<<"Faltam "<<(360-sum)<<" dias para o natal!"<<endl;        }


    }
    return 0;
}
