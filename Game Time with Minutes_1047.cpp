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
    int startTime, endTime, startMinute, endMinute, tmp, tempMinute;

    cin>>startTime>>startMinute>>endTime>>endMinute;

    if( startTime == 0 )
    {
        startTime = 24;
    }
    if( endTime == 0 )
    {
        endTime = 24;
    }

    if( startTime == endTime && startMinute == endMinute )
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else if( startTime >= endTime )
    {
        tmp = 0;
        if(startTime == endTime)
        {
            if(startMinute > endMinute)
            {
                tmp = 23;
                tempMinute = 60 - (startMinute - endMinute);
            }
            else
            {
                tempMinute = endMinute - startMinute;
                tmp = 0;
            }


            cout<<"O JOGO DUROU "<<tmp<<" HORA(S) E "<<tempMinute<<" MINUTO(S)"<<endl;
        }
        else
        {
            tmp = 24 - startTime + endTime;
            tempMinute = 0;

            if(endMinute > startMinute)
            {
                tempMinute = endMinute - startMinute;
            }
            else if(endMinute < startMinute)
            {
                tempMinute = 60 - (startMinute - endMinute);
                tmp--;
            }
            else
            {
                tempMinute = 0;
            }

            cout<<"O JOGO DUROU "<<tmp<<" HORA(S) E "<<tempMinute<<" MINUTO(S)"<<endl;
        }
    }
    else if( startTime < endTime )
    {
        tmp = endTime - startTime;

        if(endMinute > startMinute)
        {
            tempMinute = endMinute - startMinute;
        }
        else if(endMinute < startMinute)
        {
            tempMinute = 60 - (startMinute - endMinute);
            tmp--;
        }
        else
        {
            tempMinute = 0;
        }

        cout<<"O JOGO DUROU "<<tmp<<" HORA(S) E "<<tempMinute<<" MINUTO(S)"<<endl;
    }

    return 0;
}
