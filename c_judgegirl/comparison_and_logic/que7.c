// GOAL: Write a program to print 0 if the input x is a multiple of 3, and is a multiple of 5, but is not a multiple of 7. Otherwise, print 1
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x%3==0&&x%5==0&&x%7!=0)
    {
        printf("%d",1);

    }
    else{printf("%d",0);}
    return 0;
}
