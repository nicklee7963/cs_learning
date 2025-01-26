// GOAL: Write a program to read a positive integer n, then go through n phases. During the i-th phase, the program will print an integer sequence from 1 to i.
// DIFFICULTY: easy
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++){
            printf("%d\n",j);
        }
    }
}