#include<stdio.h>
int fib(int n){
     
        if(n==1 || n==0){
        return n;
    
    } else {
        return fib(n-1)+fib(n-2);
    }
}
    
    
int main(void){
    int n=14;
    int result;
    int sum=0;
    printf("the even fibonaci series is : \n");
    for(int i=0;i<n;i++){
        int result=fib(i);
        if(result%2==0){
            printf(" %d ",result);
           sum+=result;

           
        }
        
        

     
        
    }
    
      printf("\nthe sum of even fibonaci up to 10 term is %d \n",sum);

    }
    
    
   
   
