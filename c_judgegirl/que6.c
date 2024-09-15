#include <stdio.h>
int main(){
    int num;
    scanf("%d", &num);
    int first_digit = num/100;
    int second_digit = (num - first_digit*100) / 10;
    int third_digit = num%10;
    printf("%d\n%d\n%d", first_digit, second_digit, third_digit);
    return 0;
}