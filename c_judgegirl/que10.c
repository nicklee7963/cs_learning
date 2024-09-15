#include <stdio.h>
int main(){
    int total = 1;
    int num, pow;
    scanf("%d%d",&num ,&pow);
    for(int i = 0;i < pow;i++){
        total *= num;
        
    }
    printf("%d", total);
}
