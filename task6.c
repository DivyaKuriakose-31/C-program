/*Author:Divya Kuriakose
  Date:29-01-2025
  Program to check whether the candidate is eligible for the course
*/


#include<stdio.h>
int main(){
    int mathsMark,physicsMark,chemistryMark,totalMark,phyMath;

    printf("\nEnter the mark in Maths:");
    scanf("%d",&mathsMark);

    printf("\nEnter the mark in physics:");
    scanf("%d",&physicsMark);

    printf("\nEnter the mark in chemistry:");
    scanf("%d",&chemistryMark);

    totalMark = mathsMark + physicsMark + chemistryMark;
    phyMath = mathsMark + physicsMark;

    if((mathsMark >= 65 && physicsMark >= 55 && chemistryMark >= 50 && totalMark >= 190) || phyMath >= 140){
        printf("\nYou are eligible for this professional course");
    }else{
        printf("You are not eligible for this course");
    }
    return 0;
    }
