#include<stdio.h>
int main(void){
    int a=5;
    int *p=&a;
    printf(" the value of a is : %d \n",a);
    printf(" the address of a using pointer %p \n",p); // here p stores the address of a
    printf(" the address of a using & symbol %p \n",&a); // & indicates that the address of a
    printf(" the value of a using pointer is %d \n",*p);
   
}