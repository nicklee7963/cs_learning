// GOAL: Write a program to read three numbers as the height, width, and depth of a cuboid, then print its surface area in a line, then its volume in a line.
// DIFFICULTY: easy

#include<stdio.h>
int main()
{
    int hight, width, depth;
    scanf("%d%d%d",&hight,&width,&depth);
    int surface_area, volume;
    surface_area=2*(hight*width+ width*depth+depth*hight);
    volume = hight * width * depth;
    printf("%d\n%d",surface_area,volume);
    return 0;
}