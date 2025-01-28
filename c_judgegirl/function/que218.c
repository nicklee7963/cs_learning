// GOAL: give the methods of m different objects select at most n objects
// DIFFICULTY: easy
#include<stdio.h>

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
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int methods=0;
    for(int i=0;i<=n;i++){
        methods+=select(m,i);
    }
    printf("%d",methods);
    return 0;

}