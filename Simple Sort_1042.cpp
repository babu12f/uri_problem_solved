#include<iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int a[3], b[3];

    cin>>a[0]>>a[1]>>a[2];

    copy(a,a+3,b);
    sort(a,a+3);

    cout<<a[0]<<endl<<a[1]<<endl<<a[2]<<endl<<endl;
    cout<<b[0]<<endl<<b[1]<<endl<<b[2]<<endl;


    return 0;
}
