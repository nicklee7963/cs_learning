#include<stdio.h>
int main()
{
    int a,b,c,d,e, surface=0;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    surface += 2*(a*b +b*c+c*a);
    surface += 4*((a-e*2)*d + (c-e*2)*d + (a-e*2)*e + (b-d*2)*e + (b-d*2)*e + (c-e*2)*e);
    printf("%d", surface);
    return 0;
    
}