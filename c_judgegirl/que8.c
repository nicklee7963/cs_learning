#include <stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if((a+b)>c && (b+c)>a && (c+a)>b){
        printf("%d", 1);

    }
    else{
        printf("%d", 0);
    }
}