#include"value.h"
int gcd(int a,int b){
    while(a%b){
        int k=a%b;
        a=b;
        b=k;
    }
    return b;
}
int gcdd(int a,int b,int c){
    return gcd(a,gcd(b,c));
}
int value(int a,int b,int c,int d){
    if(a==79)a=30;
    else if(a==47)a=10;
    else if(a==29)a=4;
    else if(a==82)a=5;
    else if(a==26)a=3;
    else if(a==22)a=9;
    else return -1;
    int min=0;
    if(b<=0||c<=0||d<=0)return -2;
    else {
        min =gcdd(b,c,d);
        return b*c*d*min*min*min*a;

    }
}