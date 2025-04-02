#include<stdio.h>
struct student{
    int rollNo;
    char name[20];
    float cgpa;
  };
  int main(){
    struct student s1;
    printf("\n Enter the roll number");
    scanf("%d",&s1.rollNo);
    printf("\n Enter your name");
    scanf("%s",s1.name);
    printf("\n Enter the CGPA");
    scanf("%f",&s1.cgpa);
    printf("\n The student details:");
    printf("\n Name:\t%s",s1.name);
    printf("\n RollNo:%d",s1.rollNo);
    printf("\n CGPA:\t%f",s1.cgpa);
    return 0;
  }
