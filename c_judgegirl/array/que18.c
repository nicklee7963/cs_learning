// GOAL: Write a program to read the number of rows (r) and columns (c) of a two-dimensional integer array, then read the array elements row by row. Finally print the elements that are greater than all of its neighbors. Note that an element can have at most 4 neighbors. If there are multiple such elements, print them in the order of row by row, column by column.
// DIFFICULTY: medium (use neighbor=higher)
#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int array[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            scanf("%d",&array[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++){
            int num=array[i][j];
            int neighbor=0,higher=0;
            if(i+1<r)neighbor++;
            if(j+1<c)neighbor++;
            if(i-1>0)neighbor++;
            if(j-1>0)neighbor++;

            
            if(i+1<r && num>array[i+1][j])higher++;
            if(j-1>0 && num>array[i][j-1])higher++;
            if(i-1>0 && num>array[i-1][j])higher++;
            if(j+1<c && num>array[i][j+1])higher++;
            if(neighbor==higher) printf("%d\n",num);
            
            
        }

    }

}