#include<stdio.h>
int main(void){
     // total letter=16 but as default string ma last ma \0 hunxa so length +1 mention garnu parxa
    char str[16]="SandeepShrestha"; 
    int i=0;
    int count =0;
    while(str[i]!='\0'){
        printf("%s",str[i]);
        i++;
    }
    printf(" \n",i);
    
}