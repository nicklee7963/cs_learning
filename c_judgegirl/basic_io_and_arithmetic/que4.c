// GOAL: Write a program to read three integers a, b, and c , then print their sum 
// DIFFICULTY: easy

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    printf("%d",sum);
    return 0;
}