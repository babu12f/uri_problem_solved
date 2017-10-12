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
    string string1, string2, string3;

    cin>>string1>>string2>>string3;

    if(string1.compare("vertebrado") == 0)
    {
        if(string2.compare("mamifero") == 0)
        {
            if(string3.compare("onivoro") == 0)
            {
                cout<<"homem"<<endl;
            }
            else if(string3.compare("herbivoro") == 0)
            {
                cout<<"vaca"<<endl;
            }
        }
        else if(string2.compare("ave") == 0)
        {
            if(string3.compare("carnivoro") == 0)
            {
                cout<<"aguia"<<endl;
            }
            else if(string3.compare("onivoro") == 0)
            {
                cout<<"pomba"<<endl;
            }
        }
    }
    else if(string1.compare("invertebrado") == 0)
    {
        if(string2.compare("inseto") == 0)
        {
            if(string3.compare("hematofago") == 0)
            {
                cout<<"pulga"<<endl;
            }
            else if(string3.compare("herbivoro") == 0)
            {
                cout<<"lagarta"<<endl;
            }
        }
        else if(string2.compare("anelideo") == 0)
        {
            if(string3.compare("hematofago") == 0)
            {
                cout<<"sanguessuga"<<endl;
            }
            else if(string3.compare("onivoro") == 0)
            {
                cout<<"minhoca"<<endl;
            }
        }
    }

    return 0;
}
