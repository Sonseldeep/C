#include<stdio.h>
int sum(int n){
    if( n<=9){
        return n;
    }
    else{
        return n%10 + sum(n/10);
    }
}
int main(void){
     long long int n=54321;
    sum(n);
    printf("the  sum of given digit is %d\n ",sum(n));
}