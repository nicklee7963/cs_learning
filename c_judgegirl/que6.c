#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d", &a);
    d = a%10;
    a = (a-d)/10;
    c = a%10;
    a = (a-c)/10;
    b = a;
    printf("%d\n%d\n%d", b,c,d);
    return 0;
}