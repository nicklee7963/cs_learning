// GOAL: Write a program to compute the surface area and the volume of this box.
// DIFFICULTY: easy(complicate)
#include<stdio.h>
int main()
{
    int a, b,c,d,e,volume,surface_area;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    volume=a*b*c-(a-2*e)*(c-2*e)*d*2-(b-2*e)*(c-2*e)*d*2-(a-2*e)*(b-2*e)*d*2;
    printf("%d\n",volume);
    surface_area=2*(a*b+b*c+c*a)+4*d*(a-2*e+c-2*e+b-2*e+c-2*e+b-2*e+a-2*e);
    printf("%d",surface_area);
    return 0;
    

}
