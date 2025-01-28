// GOAL: Given a set of positive integers, compute their least common multiplier. For example, if you are given 2, 3, 4, and 5, then the least common multiplier is 60, because 60 is the smallest multiplier of 2, 3, 4, and 5.
// DIFFICULTY: medium 
#include<stdio.h>
int gcd(int a,int b){
    while(a%b!=0){
        int k=a%b;
        a=b;
        b=k;
    }
    return b;
}
int lcm(int a,int b){
    return a*b/gcd(a,b);
}
int main()
{
    int answer=0;
    int n;
    while(scanf("%d",&n)!=EOF){
       if(answer==0)answer=n; 
       answer=lcm(answer,n);

    }
    printf("%d",answer);
}