#include<stdio.h>
int main(void){
    int a=10;
    int b=15;
    int sum=0;
    while(a<=b){
        if(a%2==0){
            sum+=a;
        }
        a++;
    }\
    printf("sum is %d",sum);
}