// GOAL: what day is today
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int year, day;
    scanf("%d%d",&year,&day);
    int leap=0;
    if(year%400==0)
    {
        leap=1;
    }
    else if(year%4==0&&year%100!=0)
    {
        leap=1;
    }
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int month,date,answer;
        scanf("%d%d",&month,&date);
        if(month<0||month>12) 
        {
            printf("%d",-1);
            continue;
        }
        if(month%2==1){
            if(date>31||date<0) 
            {
                printf("%d",-2);
                continue;
            }
        }
        else{
            if(month==2)
            {
                if(leap==1&&date>29||date<0){
                    printf("%d",-2);
                    continue;
                }
                else if(leap==0&&date>28||date<0)
                {
                    printf("%d",-2);
                    continue;
                    
                }
            }
            else{
                if(date>30)
                {

                    printf("%d",-2);
                    continue;
                }
            }
        }
        int days=0;
        while(month-1)
        {
            month--;
            if(month%2==1) days+=31;
            else{
                if(month==2)
                {
                    if(leap==1){
                        days+=29;
                    }
                    else{
                        days+=28;
                    }
                }
                else{
                    days+=30;
                }
            }

        }
        days+=date;
        days+=day;
        answer=days%7;
        printf("%d\n",answer);
    }
}