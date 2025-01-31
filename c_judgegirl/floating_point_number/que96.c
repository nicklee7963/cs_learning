// GOAL: Write a program to determine how much grass a cow can eat. A cow is attached to a rope of length c, and the other end of the rope is attached to a corner of a rectangular house of width a and depth b. Please determine the area the cow can browse.
// DIFFICUlTY: easy
#include<stdio.h>
double area_calculate(double r){
    return 3.1415926*r*r;
}
int main()
{
    double a,b,c;
    double area;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(c>a&&c>b){
        area=3.0/4.0*area_calculate(c)+1.0/4.0*area_calculate(c-a)+1.0/4.0*area_calculate(c-b);


    }
    else if(b<c&&c<a){
        area=3.0/4.0*area_calculate(c)+1.0/4.0*area_calculate(c-b);
    }
    else if(c>a&&c<b){
        area=3.0/4.0*area_calculate(c)+1.0/4.0*area_calculate(c-a);
    }
    else if(c<a&&c<b){
        area=3.0/4.0*area_calculate(c);
    }
    printf("%lf",area);
    


}