#include <stdio.h>
int main(){
    int s, f, t;
    scanf("%d%d%d", &s, &f, &t);
    if((f -8*(s-t)- 2* t)%2!=0){
        printf("%d", 0);
    }
    else{
        int crab = s - t;
        int rabbit = (f -8*crab- 2*t)/2;
        int chicken = t - rabbit;

        if(crab<0 || chicken < 0 || rabbit < 0){
            printf("%d", 0);
        }
        else{
            printf("%d\n%d\n%d", chicken, rabbit, crab);
        }
    }
    

}