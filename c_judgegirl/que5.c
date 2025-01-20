#include <stdio.h>
int main()
{
    int a, b, c, surface, volume;
    scanf("%d%d%d", &a, &b, &c);
    surface = 2 * (a * b + b * c + c * a);
    volume = a * b * c;
    printf("%d\n%d", surface, volume);
    return 0;
}