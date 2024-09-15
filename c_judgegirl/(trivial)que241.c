#include <stdio.h>
int main(){
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    int slope1 = y1/x1;
    int slope2 = y2/x2;
    int slope3 = y3/x3;
    int slope4 = y4/x4;
    if((slope1>0&&slope2>0&&slope3>0&&slope4>0)||(slope1<0&&slope2<0&&slope3<0&&slope4<0)){
        printf("%d", 0);
    }
    else{
        printf("%d", 1);
    }
}