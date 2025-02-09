/*Author:Divya Kuriakose
  Date:07-02-2025
  program to add the diagonal element of the given square matrix
*/


#include<stdio.h>
int main(){
    int row,col,sum=0;
    printf("\n Enter the row and column:");
    scanf("%d%d",&row,&col);
    int matrix[row][col];
    printf("\n Enter the elements:");
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          scanf("%d",&matrix[i][j]);
          }
    }
    for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          if(i==j){
            sum=sum+matrix[i][j];
           } 
        }
     }   
     for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
          printf("%d\t",matrix[i][j]);
          }
        printf("\n");
        }
     printf("\n The sum is:%d",sum);
     return 0;
     }
