#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>

#define pf printf
#define sf scanf
#define ll long long

using namespace std;

int main()
{
    int i, len, ch;
    char s[100];

    while(gets(s))
    {
        //getchar();
        len = strlen(s);

        ch=0;

        for(i=0;i<len; i++)
        {
            if(s[i]!=' ')
            {
                if(ch%2==0) s[i] = toupper(s[i]);
                else s[i] = tolower(s[i]);
                ch++;
            }
        }
        cout<<s<<endl;
    }

    return 0;
}


