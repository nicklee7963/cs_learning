#include"selection.h"
int select(int n,int m){
    int answer=1;
    for(int i=n;i>n-m;i--){
        answer*=i;
    }
    for(int i=1;i<=m;i++){
        answer/=i;
    }
    return answer;
}