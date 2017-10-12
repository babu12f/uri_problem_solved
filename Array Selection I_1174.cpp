#include<bits/stdc++.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    cout<<fixed;
    cout<<setprecision(1);
    float n;

    for(int i=0; i<100; i++)
    {
        cin>>n;
        if(n<=10.00)
        cout<<"A["<<i<<"] = "<<n<<endl;
    }

    return 0;
}
