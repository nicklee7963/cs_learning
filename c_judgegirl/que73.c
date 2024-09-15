#include <stdio.h>
int main(){
    int n;
    int input_num;
    int zero = 0, one = 0, two = 0;
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d", &input_num);
        switch (input_num%3){
            case 0:
                zero+=1;
                break;
            case 1:
                one+=1;
                break;
            case 2:
                two+=1;
                break;
        }


    }
    printf("%d\n%d\n%d", zero, one, two);

}