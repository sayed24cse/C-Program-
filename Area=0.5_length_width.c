#include<stdio.h>

int main()
{
    float length, width, area;
    
    printf("Enter length is:\n");
    scanf("%f", & length);
    printf("Enter width is:\n");
    scanf("%f", &width);
    
    area=(0.5*length*width);
    printf("Area is %.2f:\n", length, width);
    return 0;
}