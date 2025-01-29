#include<stdio.h>
#include"card.h"
int divide(int a){
    if(a%2==0)return a/2;
    else return a/2+1;
}
void shuffle(int *deck[]){
    int card_number=0;
    while(deck[card_number]!=NULL){
        card_number++;
        //printf("pass");
    }
    int card_first[10000];
    int card_second[10000];
    // printf("pass");
    for(int i=0;i<divide(card_number);i++){
        card_first[i]=*deck[i];
        // printf("pass");
    }
    for(int i=divide(card_number);i<card_number;i++){
        card_second[i-divide(card_number)]=*deck[i];
        // printf("pass");
    }
    for(int i=0;i<card_number;i+=2){
        *deck[i]=card_first[i/2];
        if(i+1<card_number) *deck[i+1]=card_second[i/2];
        // printf("pass");
    }
    deck[card_number]=NULL;
    return ;


}
void print(int *deck[]){
    int index=0;
    // printf("pass");
    while(deck[index]!=NULL){
        printf("%d\n",*deck[index]);
        index++;
    }
    return ;
}
