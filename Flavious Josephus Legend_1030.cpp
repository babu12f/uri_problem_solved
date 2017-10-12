#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    vector<int> v ;

    v.push_back(25);
    v.push_back(26);
    v.push_back(27);
    v.push_back(28);

    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }



    return 0;
}
