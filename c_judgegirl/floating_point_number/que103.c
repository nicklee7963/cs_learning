// GOAL: Write a program to solve a system of equations. In particular we are given an n by n upper triangular matrix A and a n by 1 vector y, and we would like to find another n by 1 vector x so that Ax=y. Since A is upper triangular, i.e., all the elements below the diagonal are zero, we can use a simple procedure called backward substitution to get the vector x. Since An,n×xn=yn, so we conclude that xn=yn/An,n. Since we know xn now, we can easily compute xn−1, then xn−2, and so on, until we finally compute x1.
// DIFFICULTY: medium
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double array[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            scanf("%lf",&array[i][j]);
        }
    }
    double y[n],x[n];
    for(int i=0;i<n;i++){
        scanf("%lf",&y[i]);
    }
    x[n-1]=y[n-1]/array[n-1][n-1];
    int k;
    for(k=n-2;k>=0;k--){
        x[k]=y[k];
        for(int i=n-1;i>k;i--){
           x[k]-=array[k][i]*x[i];
        }
        x[k]/=array[k][k];
    }
    

    
    for(int i=0;i<n;i++){
        printf("%f\n",x[i]);
    }

}