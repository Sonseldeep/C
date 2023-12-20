#include<stdio.h>
#include<string.h>
void palindrome(char str[],int n){
 int start =0;
 int end =n-1;
 while(start<end){
    if(str[start]==str[end]){
        printf(" it is a palindrome");
    } else{
        printf("not palindrome \n");
    }
    start++;
    end--;
 }

}
int main(void){
    char str[]= "racecarn";
    int n= strlen(str);
   
    palindrome(str,n);

}