#include<stdio.h>
#include<string.h>
int main(void){
     char str[]="Sandeep";
     char* ptr=str; // ptr now points to str[0]
     /*
         int i=0;
         while(*ptr!='\0'){
            printf("%c",*ptr);
            ptr++;
            i++;
         }
         printf("\n");
*/
*ptr ='K'; // 1st value change hunxa 
ptr="sandeep";
printf("%s",str);
printf("\n");
}
