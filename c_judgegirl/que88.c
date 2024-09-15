#include <stdio.h>
int main(){
    int a,b,a1,a2,a3,a4,b1,b2,b3,b4;
    scanf("%d%d",&a,&b);
    a1 = a/1000;
    b1 = b/1000;
    a2 = (a-a1*1000)/100;
    a3 = (a-a1*1000-a2*100)/10;
    a4 = a%10;
    b2 = (b-b1*1000)/100;
    b3 = (b-b1*1000-b2*100)/10;
    b4 = b%10;
    int A=0, B=0;
    if(a1 == b2 || a1 == b3 ||a1 == b4){
        B++;
    }
    if(a2 == b1 || a2 == b3 ||a2 == b4){
        B++;
    }
    if(a3 == b2 || a3 == b1 ||a3 == b4){
        B++;
    }
    if(a4 == b2 || a4 == b3 ||a4 == b1){
        B++;
    }
    if(a1==b1){
        A++;
    }
    if(a2==b2){
        A++;
    }
    if(a3==b3){
        A++;
    }
    if(a4==b4){
        A++;
    }
    printf("%dA%dB", A, B);


}