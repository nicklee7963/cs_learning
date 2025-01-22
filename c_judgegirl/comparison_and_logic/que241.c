// GOAL: Given a convex quadrilateral Q, please determine if the origin (0,0) is with Q. For example, if Q has four corners (2,1), (−1,2), (−2,−1), and (−1,−3) then the answer is yes. If Q is (12,1), (9,2), (8,−1), and (9,−3) then the answer is no.
// DIFFICULTY: medium
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);
    int x1=a-c;
    int y1=b-d;
    int x2=c-e;
    int y2=d-f;
    int x3=e-g;
    int y3=f-h;
    int x4=g-a;
    int y4=h-b;
    if(x1*y2-x2*y1>=0&&x2*y3-x3*y2>=0&&x3*y4-x4*y3>=0&&x4*y1-x1*y4>=0)printf("%d",1);
    else printf("%d",0);
    return 0;
}