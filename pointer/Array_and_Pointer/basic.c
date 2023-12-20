#include<stdio.h>
int main(void){
    int A[]={1,2,3,4,5};
         printf("%p is the address of first elements of ARRAY \n",A); // A holds the address of first elements of Array
         int *ptr = &A[0];
    printf("the address of 0th index is %p \n ",ptr);
    
}