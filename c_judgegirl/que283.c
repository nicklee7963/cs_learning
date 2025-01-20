#include<stdio.h>
int main()
{
    int s, f, t, crab = 0, chicken= 0, rabbit = 0;
    scanf("%d%d%d", &s, &f, &t);
    crab = s - t;
    chicken = (4*(s - crab) - (f-8*crab))/2;
    rabbit = s - crab - chicken;
    printf("%d\n%d\n%d", chicken, rabbit, crab);
    return 0;
}