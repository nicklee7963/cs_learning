// GOAL: Write a program to read a positive integer n and a sequence of n positive integers, then print the sequence in 2 lines. The first line is for odd numbers, and the second line is for even numbers.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int odd[n],even[n];
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        int num;
        scanf("%d",&num);
        if(num%2==0){
            even[j]=num;
            j++;
        }
        else if(num%2==1){
            odd[k]=num;
            k++;
        }
    }
    for(int i=0;i<j;i++)
    {
        printf("%d",even[i]);
        if(i<j-1)printf(" ");
        else printf("\n");
    }
    for(int i=0;i<k;i++)
    {
        printf("%d",odd[i]);
        if(i<k-1)printf(" ");
    }
}