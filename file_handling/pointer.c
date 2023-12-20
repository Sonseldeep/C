#include<stdio.h>
int main(void){
    int age=22;
    int *ptr;
    ptr=&age;
    
    printf("%p\n", ptr);

    printf("%p\n",&age);

    printf("%p\n",&ptr);

    printf("%i\n",*ptr);

    printf("%i \n",*(&age));
}