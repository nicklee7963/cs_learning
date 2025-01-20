#include<stdio.h>
int main()
{
    int n, number;
    scanf("%d%d", &number, &n);
    int total = 1 ;

    for (int i = 0; i<n;i++)
    {
       total *= number;

    }
    printf("%d", total);
    return 0;
}