/*Author:Divya Kuriakose
  Date:02-02-2025
  program to check whether a triangle is equilateral,Isosceles or Scalene
  */

#include<stdio.h>
int main(){
    int side1,side2,side3;
    printf("\nEnter the sides of the triangle");
    scanf("%d%d%d",&side1,&side2,&side3);

    if(side1 == side2 && side2 == side3){
        printf("This is an Equilateral triangle");
    }else if(side1 == side2 || side2 == side3 || side3 == side1){
        printf("\nThis is an Isosceles triangle");
    }else{
        printf("\nThis is a Scalene triangle");
    }
    return 0;
}
