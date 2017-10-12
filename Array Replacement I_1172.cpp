#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    //cout<<fixed;
    //cout<<setprecision(3);
    int n;

    for(int i=0; i<10; i++)
    {
        cin>>n;
        if(n>0)
        {
            cout<<"X["<<i<<"] = "<<n<<endl;
        }
        else
        {
            cout<<"X["<<i<<"] = 1"<<endl;
        }
    }

    return 0;
}
