// GOAL: There are chicken, rabbit, and crab in a cage. Now given the total number of animals s, the total number of legs f, and the total number of tails of these animals t, please compute the numbers of the chicken, rabbit, and crab, respectively.
// DIFFICULTY: easy 
#include<stdio.h>
int main()
{
    int s,f,t,chickens,rabbits,crabs;
    scanf("%d%d%d",&s,&f,&t);
    crabs=s-t;
    s-=crabs;
    f = f-8*crabs;
    rabbits=(4*s-f)/2;
    chickens=s-rabbits;
    if (chickens>0&&crabs>0&&rabbits>0)
    {
        printf("%d\n%d\n%d",crabs,rabbits,chickens);
    }
    else{
        printf("%d",0);
    }
    return 0;

}