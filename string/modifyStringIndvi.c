#include<stdio.h>
int main(void){
char str[]="SANDEEP";
str[0]=65;   // ASCI value of A is 65;

str[1]='S';
int i=0;
 while(str[i]!='\0'){
    printf("%c",str[i]);    // *((str+i) == arr[i]
    i++;
}
printf("\n");

}