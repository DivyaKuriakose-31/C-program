/*Author :Divya Kuriakose
  Date :07-02-2025
  Program to find the sum of two matrix
*/

#include<stdio.h>
int main(){
    int row,col;
    printf("\n Enter the row and column:");
    scanf("%d%d",&row,&col);
    int matrix1[row][col] , matrix2[row][col] ,matrix3[row][col];
    printf("\n Enter the first matrix:");
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          scanf("%d",&matrix1[i][j]);
          }
    }
   printf("\n Enter the second matrix:");
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          scanf("%d",&matrix2[i][j]);
          }
    }
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           matrix3[i][j]=matrix1[i][j] + matrix2[i][j];
        }
     }
     printf("\n The sum is:\n");
     for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          printf("%d\t",matrix3[i][j]);
       }
       printf("\n");
     } 
     return 0;
     }
