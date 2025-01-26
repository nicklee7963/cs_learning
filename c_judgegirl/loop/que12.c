// GOAL: Write a program to read a positive integer n, then print a sequence of 2n−1 integers from 1 to n, and then from n−1 to 1.
// DIFFICULTY: easy
#include<stdio.h> 
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        printf("%d\n",i);
    }
    for(int i=n;i>0;i--)
    {
        printf("%d\n",i);
    }
    return 0;
    
}