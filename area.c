/* Author:Divya Kuriakose
   Date:26-03-2025
   Program to program to calculate the area of a circle and a cylinder using macros for constant values. */

#include<stdio.h>
#define PI 3.14159
int main(){
    float area_circle,area_cylinder,h,r;
    printf("\n Enter the radius for circle and cylinder:");
    scanf("%f",&r);
    printf("\n Enter the height of the cylinder:");
    scanf("%f",&h);
    area_circle=PI*r*r;
    printf("\n Area of circle %f",area_circle);
    area_cylinder= 2*PI*r*(r+h);
    printf("\n Area of cylinder is %f",area_cylinder); 
    return 0;
    }
