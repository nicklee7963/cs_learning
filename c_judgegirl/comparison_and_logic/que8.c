// GOAL: Write a program to print 1 if the three positive integers a , b, and c are valid lengths of a triangle; print 0 otherwise. We can verify the condition by assuring that all a, b, and c are positive, and the sum of any two of them is greater than the third.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a+b>c&&b+c>a&&c+a>b)
    {
        printf("%d",1);
    }
    else printf("%d",0);
    return 0;
}