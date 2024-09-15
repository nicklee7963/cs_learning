#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x%15 == 0 && x%7!= 0){
        printf("%d", 0);

    }
    else{
        printf("%d", 1);
    }
}