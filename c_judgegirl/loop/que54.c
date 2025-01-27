// GOAL: Write a program to report the number of times a number N appears in another number M. These appearances may overlap.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int keyword,input,answer=0;
    scanf("%d%d",&keyword,&input);
    while(input/10)
    {
        int temp=input%100;
        input/= 10;
        printf("%d\n",temp);
        if(temp==keyword)answer++;

    }
    printf("%d",answer);
    return 0;
    


}