// to create a structure type Person with name salary and age as its attributes print details of P1
#include<stdio.h>
#include<string.h>
int main(void){
    struct Person{
        char name[100];
        float salary;
        int age;
    }P1,P2;
    strcpy(P1.name,"Ram");
    P1.salary=67549.125;
    P1.age=27;
    
    strcpy(P2.name,"Shyam");
    P2.salary=1000000.00;
    P2.age=47;
    printf("Details Info about P1: \n");
    printf(" \n");

    printf("Name: %s\n",P1.name);
    printf("Salary: %.3f\n",P1.salary);
    printf("Age: %i \n",P1.age);


}