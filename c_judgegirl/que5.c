#include <stdio.h>
int main(){
    int height, width , depth;
    scanf("%d", &height);
    scanf("%d", &width);
    scanf("%d", &depth);

    int surface_area = 2*(height*width + width*depth + depth*height);
    int volume = height * width * depth;

    printf("%d\n", surface_area);
    printf("%d", volume);
    return 0;

    
}