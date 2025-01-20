#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if (a%7 == 0)
    {
        printf("%d",1);
    }
    else
    {
        if(a%15 == 0)
        {
            printf("%d", 0);

        }
        else
        {
            printf("%d", 1);
        }
    }
}