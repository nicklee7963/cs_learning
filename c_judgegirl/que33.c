#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int array[n][n];
    for (int i = 0;i<n;i++)
    {
        for (int k = 0;k<n;k++)
            {
                scanf("%d",&array[i][k]);
        
            }
        
    }
    int count =0;
    int intersection = 0;
    int turn=0;
    int junction=0;
    int dead=0;
    for (int i = 0;i<n;i++)
    {
        for (int k = 0;k<n;k++)
            {
               count =0;
               int object = array[i][k]; 
               if(object==1)
               {
                if(i-1>=0&&array[i-1][k]==1)count++;
                if(k+1<n&&array[i][k+1]==1)count++;
                if(k-1>=0&&array[i][k-1]==1)count++;

                if(i+1<n&&array[i+1][k]==1)count++;
                if(count==1)dead++;
                if(count==2)
                {
                    if(array[i+1][k]!=array[i-1][k]&&array[i][k-1]!=array[i][k+1]){
                        turn++;
                    }
                    else if(i==0||k==0||i==n-1||k==n-1){
                        turn++;
                    }
                }
                
                if(count==3)junction++;
                if(count==4)intersection++;
                printf("%d",count);
        
                
               }
            }
        
    }
    printf("%d\n",intersection);
    printf("%d\n",junction);
    printf("%d\n",turn);
    printf("%d\n",dead);
    


    
    
}