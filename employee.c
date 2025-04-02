#include<stdio.h>
typedef struct{
    int salary,id;
    char name[20];
    }employee;
 int main(){
    int limit;
    printf("\n Enter the number of employees:");
    scanf("%d",&limit);
    employee e[limit];
 for(int i=0;i<limit;i++){
    printf("\n Enter the ID:");
    scanf("%d",&e[i].id);
    printf("\n Enter your name:");
    scanf("%s",e[i].name);
    printf("\n Enter the Salary:");
    scanf("%d",&e[i].salary);
    }
    printf("\n The employee details:");
    for(int i=0;i<limit;i++){
      printf("\n Name:\t%s",e[i].name);
      printf("\n ID:%d",e[i].id);
      printf("\n Salary:%d",e[i].salary);
      }
      return 0;
      }
