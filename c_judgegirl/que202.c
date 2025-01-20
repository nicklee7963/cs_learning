#include <stdio.h>
int gcd(int a,int b);
int gcd(int a,int b){
    int temp = 0;
    while (b!=0){
        temp =b;
        b =a%b;
        a = temp;
    }
    return a;
}
int main ()
{
 int a, b, c, d ,e ,f ,g ,h ,i ,j;
 scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
 double answer = 0;
 int positive = 1;
 double x =(double)b/c;
 float y =(float)f/g;
 
 if (a*e<0){ 
    if(a<0){a*=-1;}
    else{e*=-1;}

    positive =0;
 }

 if (d == 0){
    answer = a+x+e+y;
 }
 else if (d==1){
    answer = (a+x)-(e+y);
 }
 else if (d==2){
    answer = (a+x)*(e+y);
    
 }
 else if (d==3){
    answer = (a+x)/(e+y);
 }
 printf("%f\n",answer);
 h = (int)answer;
 answer = (int)answer-h; 
 int l = 1;
 while ((int)answer!=answer){
    l *=10;
    answer*=10;
 }
 
 if(positive==0){h*=-1;} 
 int GCD =gcd (answer,l);
 i = answer/GCD;
 j = l/GCD;
 printf("%d\n%d\n%d",h,i,j);
}