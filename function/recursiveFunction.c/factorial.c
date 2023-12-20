#include<stdio.h>
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else{
        return n* fact(n-1);
    }
}
int main(void){
    int n=5;
    fact(n);
    printf("the 5! is %d \n",fact(n));
}