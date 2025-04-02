#include<stdio.h>
typedef struct{
    int rollNo;
    char name[20];
    int mark1;
    int mark2;
    int mark3;
    }student;
  int main(){
    int totalMark,avgMark,n;
    printf("Enter the number of students:");
    scanf("%d",&n);
    student s[n];
  for(int i=0;i<n;i++){
    printf("\n Enter the name:");
    scanf("%s",&s[i].name);
    printf("\n Enter your rollno:");
    scanf("%d",&s[i].rollNo);
    printf("\n Enter the mark1:");
    scanf("%d",&s[i].mark1);
    printf("\n Enter the mark2:");
    scanf("%d",&s[i].mark2);
    printf("\n Enter the mark3:");
    scanf("%d",&s[i].mark3);
    totalMark=totalMark+s[i].mark1+s[i].mark2+s[i].mark3;
    avgMark=totalMark/n;
    printf("\n");
    }
    printf("\n The total mark of the students is %d",totalMark);
    printf("\n The average mark of the students is %d",avgMark);
    return 0;
    }
    
