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

int isBalnced(char ch[])
{
    int i = 0, count=0;

    while(ch[i])
    {
        if(ch[i] == '<')
        {
            push(ch[i]);
        }
        if(ch[i] == '>')
        {
            if(pop() =='<')
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

int main()
{
    char ch[1000];
    int test;

    cin>>test;
    getchar();
    while(test--)
    {
        gets(ch);
        cout<<isBalnced(ch)<<endl;
        top=-1;
    }

    return 0;
}
