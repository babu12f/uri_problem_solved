
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <functional>

#define pf printf
#define sf scanf

using namespace std;

int main()
{
    double salary, total, tax, tmp;

    cin>>salary;

    if(salary<=2000)
    {
        cout<<"Isento"<<endl;
    }
    else
    {
        if(salary<=3000)
        {
            tax = ((salary - 2000)*8)/100;
        }
        else if(salary<=4500)
        {
            tmp = ((salary - 3000)*18)/100;
            salary = 3000;
            tax = tmp + ((salary - 2000)*8)/100;
        }
        else
        {
            tmp = ((salary - 4500)*28)/100;
            salary =  4500;
            tmp = tmp + ((salary - 3000)*18)/100;
            salary =  3000;
            tax = tmp + ((salary - 2000)*8)/100;
        }
        pf("R$ %.2lf\n",tax);
    }


    return 0;
}
