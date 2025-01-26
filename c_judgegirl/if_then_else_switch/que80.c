// GOAL: determine which triangle the given point can compose
// DIFFICULTY: easy
#include<stdio.h>
int main()
{
    int n;
    int a,b,c,d,e,f;
    scanf("%d%d%d%d%d%d%d",&n,&a,&b,&c,&d,&e,&f);
    for (int i=0;i<n;i++){
        int one=(a-c)*(a-c)+(b-d)*(b-d);
        int two=(c-e)*(c-e)+(d-f)*(d-f);
        int three=(e-a)*(e-a)+(f-b)*(f-b);
        int temp;
        if(three>two)
        {
        temp=three;
        three=two;
        two=three; 
        }
        if(two>one)
        {
        temp=one;
        one=two;
        two=temp; 
        }
        if(three>two)
        {
        temp=three;
        three=two;
        two=three; 
        }
        if(three==two)printf("%s","isosceles\n");
        else{

            if(two+three==one)printf("%s","right\n");
            if(two+three>one)printf("%s","acute\n");
            if(two+three<one)printf("%s","obtuse\n");
        }
    }
    
    

}