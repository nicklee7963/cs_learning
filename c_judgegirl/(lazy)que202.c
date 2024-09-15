#include <stdio.h>

int gcd_func(int a, int b) {
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int a, b, c, d, e, f, g, h, i ,j;
    
    
    scanf("%d%d%d%d%d%d%d",&a, &b, &c, &d, &e, &f, &g);
    b+=a*c;
    f+=e*g;
    switch (d){
        case 0:
            j = c*g;
            i = b+f;
            while(i>j){
                i -= j;
                h+=1;
            }
            if( i == 0){
                j = 1;
            }
            else {
                int gcd = gcd_func(i,j);
                j/=gcd;
                i/=gcd;
            }
            break;
    }
    printf("%d\n%d\n%d",h,i,j);

            

}







