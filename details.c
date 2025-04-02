#include<stdio.h>
typedef struct{
    int rollNo;
    char name[20];
    float cgpa;
    }student;
 int main(){
    int limit;
    printf("\n Enter the limit:");
    scanf("%d",&limit);
    student s[limit];
 for(int i=0;i<limit;i++){
    printf("\n Enter the roll number");
    scanf("%d",&s[i].rollNo);
    printf("\n Enter your name");
    scanf("%s",s[i].name);
    printf("\n Enter the CGPA");
    scanf("%f",&s[i].cgpa);
    }
    printf("\n The student details:");
    for(int i=0;i<limit;i++){
      printf("\n Name:\t%s",s[i].name);
      printf("\n RollNo:%d",s[i].rollNo);
      printf("\n CGPA:\t%f",s[i].cgpa);
      }
      return 0;
      }
