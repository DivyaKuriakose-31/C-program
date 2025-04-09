#include<stdio.h>
int main(){
    FILE *fp;
    int wordCount=0;
    int charCount=0;
    int lineCount=0;
    fp=fopen("sample.txt","r");
    char ch;
    while(fscanf(fp,"%c",&ch)==1){
       if(ch==' '|| ch=='.'){
          wordCount++;
       }
       else if(ch!='\n'){
          charCount++;
       }
       else{
          lineCount++;
          }
    }
    printf("Word Count:%d",wordCount);
    printf("\nCharacter count:%d",charCount+wordCount);
    printf("\nLine Count:%d",lineCount);
    fclose(fp);
    return 0;
   } 
  
