// GOAL: print sequence backward
// DIFFICULTY: east
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int j=n-1;j>=0;j--){
        printf("%d\n",array[j]);
    }
}