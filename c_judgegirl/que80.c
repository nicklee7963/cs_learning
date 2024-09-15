#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int x1,y1,x2,y2,x3,y3;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ){
        scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
        int a = (pow(x1-x2,2)+pow(y1-y2,2));
        int b = (pow(x2-x3,2)+pow(y2-y3,2));
        int c = (pow(x3-x1,2)+pow(y3-y1,2));
        if(a==b || b==c || c==a){
            printf("isosceles\n");
        }
        else if(a+b == c || b+c ==a ||c+a == b){
            printf("right\n");
        }
        else if(a+b<c || b+c<a || c+a<b){
            printf("obtuse");
        }
        else{
            printf("acute");
        }

    }
}