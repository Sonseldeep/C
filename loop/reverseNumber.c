#include<stdio.h>
int main(void){
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
         r=r+(n%10);
        
       
        n=n/10;


    }
    printf("the reverse number is %d \n ",r);
    printf("Name:Sandeep Shrestha\n");
   
}
