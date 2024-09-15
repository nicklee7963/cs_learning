#include <stdio.h>
int main(){
    int x;
    int score;
    scanf("%d", &x);
    if (x<0||x==0){
        score = -100;
    }
    else{
        score = 0;
    }
    if(x%3 == 0){
        score += 3;
        if(x%5 == 0){
            score += 5;
            if((100<x||x == 100) &&(x<200||x == 200)){
                score += 50;
            }
            else{
                score -= 50;
            }
        }
    }
    printf("%d", score);
    
}