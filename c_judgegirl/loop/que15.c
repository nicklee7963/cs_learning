// GOAL: Write a program to read a positive integer n and then print n backward to .
// DIFFICULTY: easy
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        printf("%d\n",i);
    }
    return 0;
}