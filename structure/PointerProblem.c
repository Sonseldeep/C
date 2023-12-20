#include<stdio.h>
#include<string.h>
int main(void){
     int x=5, y=7; 
 // int *a=&x, b=&y; // warning aauxa not good 

    typedef int* pointer;
    pointer a= &x;
    pointer b=&y;
    printf("%p\n",a);
    printf("%p\n",b);

}