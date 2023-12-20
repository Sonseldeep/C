#include<stdio.h>
int power(int a, int b){
    if( b==0){
        return 1;
    }
    else{
        return a*power(a,b-1);
    }
}
int main(void){
    int a=4,b=3;
   int result= power(a, b);
    printf("the power of given two number is %d \n",result);
}