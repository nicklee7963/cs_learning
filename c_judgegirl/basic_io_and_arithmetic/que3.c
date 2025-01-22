// GOAL: Write a program to read two integers a and b, print b first in a line, then print a in another line.
// DIFFICULTY: easy

#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d\n%d",b,a);
    return 0;
}