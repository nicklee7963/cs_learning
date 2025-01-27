// GOAL: input two numbers and determine a and b number
// DIFFICULTY: medium
#include<stdio.h>
int main()
{
    int one, two,a=0,b=0;
    scanf("%d%d",&one,&two);
    int digit_one,digit_two;
    for(int i=0;i<4;i++){
        digit_one=one%10;
        one/=10; 
        int temp = two;
        for(int k=0;k<4;k++)
        {
            digit_two=temp%10;
            temp/=10;
            printf("%d",digit_two);
            if(digit_one==digit_two)
            {
                if(k==i)a+=1;
                else b+=1;
                

            }
        }

    }
    printf("%dA%dB",a,b);
    return 0;



}