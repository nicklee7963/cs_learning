// GOAL: There are chickens, rabbits, and crabs in the same cage. Given the total number of animals (s), the total number of legs (f), and the total number of tails (t) (0 ≤ s, f, t ≤ 2³¹ − 1), calculate the number of chickens, rabbits, and crabs.
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
    printf("%d\n%d\n%d",crabs,rabbits,chickens);
    return 0;

}