// GOAL: Write a program to count the number of integers that are 3n, 3n+1, and 3n+2 respectively
// DIFFICULTY: easy 
#include<stdio.h>
int main()
{
    int n;
    int zero=0,one=0,two=0;
    int object;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&object);
        if(object%3==0)zero+=1;
        if(object%3==1)one+=1;
        if(object%3==2)two+=1;
    }
    printf("%d\n%d\n%d",zero,one,two);
    return 0;
}