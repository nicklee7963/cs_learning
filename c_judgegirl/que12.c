#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1;i<=n;i++){
        printf("%d\n", i);
        if(i == n){
            for(int k = n-1;k>0;k--){
                printf("%d\n",k );
            }
        }
    }
    
}