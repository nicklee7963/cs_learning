#include "max.h"
#include<stdio.h>
int max(int *iptr[],int n){
    int max;
    for(int i=0;i<n;i++){
        if(i==0) max=*iptr[i];
        else if(*iptr[i]>max)max=*iptr[i];
        
    }
    return max;
}