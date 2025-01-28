// GOAL: Write a program to read the number of rows (r) and columns (c) of a two-dimensional integer array first, then read the array elements row by row. Finally print the average (in integer) of every column.
// DIFFICULTY: easy
#include <stdio.h>
 
int main (){
    int r,c,arr[100][100];
    scanf ("%d%d",&r,&c);
    for (int i=0;i<r;i++)
        for (int j=0;j<c;j++)
            scanf ("%d",&arr[i][j]);
    int sum=0;
    for (int i=0;i<c;i++){
        for (int j=0;j<r;j++)sum+=arr[j][i];
        printf ("%d\n",sum/r);
        sum=0;
    }
}