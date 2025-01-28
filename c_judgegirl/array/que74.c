// GOAL: Write a program to count the number of integers which can be written as M⋅k,M⋅k+1, ... and M⋅k+M−1 respectively.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    scanf("%d",&m);
    int num;
    for(int i=0;i<m;i++)
    {
        num=0;
        for(int k=0;k<n;k++)
        {
            if(array[k]%m==i)
            {
                num++;
            }
        }
    printf("%d\n",num);
    }
    
}