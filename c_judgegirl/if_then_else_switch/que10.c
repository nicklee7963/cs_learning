// GOAL: Write a program to compute the i-th power of n, where n is an integer, and i is a positive integer from 1 to 5 inclusively.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
     int i,n;
     int answer=1;
     scanf("%d%d",&n,&i);
     for(int j=0;j<i;j++){
        answer*=n;
     }
     printf("%d",answer);
     return 0;
}