// GOAL: Write a program to compute a score for an integer x. If x is zero or negative, the score is −100. Otherwise, we start with 0. If the  is a multiple of 3, add 3 to the score. After that, if x is a multiple of 5, add 5 to the score. After that if x is between 100 and 200 (inclusive), add 50 to the score, else subtract 50 from the score. Now print the score.
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int input,score;
    scanf("%d",&input);
    if(input<=0)score=-100;
    else score=0;
    if(input%3==0)
    {
        score+=3;
        if(input%5==0)
        {
            score+=5; 
            if(input<=200&&input>=100)
            {
                score+=50;
            }
            else{
                score-=50;
            }
        }
    }
    printf("%d",score);
    return 0;
    
}