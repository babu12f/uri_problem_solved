#include <bits/stdc++.h>

#define pf printf
#define sf scanf
#define MAX 1000

using namespace std;

char stk[MAX];
int top = -1;

int push(char ch)
{
    top++;
    stk[top] = ch;
}

char pop()
{
    if(top>-1)
       return stk[top--];
    else
        return 'c';
}

bool isBalnced(char ch[])
{
    int i = 0;

    while(ch[i])
    {
        if(ch[i] == '(')
        {
            push(ch[i]);
        }
        if(ch[i] == ')')
        {
            if(pop() !='(')
            {
                return false;
            }
        }
        i++;
    }
    if(top>-1)
    return false;
    else
    return true;
}

int main()
{
    char ch[1000];

    while(gets(ch))
    {
        if(isBalnced(ch))
        {
            cout<<"correct"<<endl;
            top = -1;
        }
        else
        {
            cout<<"incorrect"<<endl;
            top = -1;
        }
    }

    return 0;
}
