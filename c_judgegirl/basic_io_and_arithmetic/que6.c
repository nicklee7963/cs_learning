// GOAL: Write a program to read a number x between 100 and 999, then print the first, the second and the third digit of x Every digit is in one line.
// DIFFICULTY: easy

#include<stdio.h>
int main()
{
    int number, first_digit, second_digit, third_digit;
    scanf("%d",&number);
    third_digit = number%10;
    number=(number-third_digit)/10;
    second_digit = number%10;
    first_digit=(number-second_digit)/10;
    printf("%d\n%d\n%d",first_digit,second_digit,third_digit);
    return 0;
}