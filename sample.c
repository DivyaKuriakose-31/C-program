#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("sentence.txt","r");
    char ch;
    int no_words=0;
    int no_lines=0;
    int no_charac=0;
    
    
    while(ch=getc(fp)){
