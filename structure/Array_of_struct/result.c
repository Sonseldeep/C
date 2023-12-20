#include<stdio.h>
#include<string.h>
#define MAX 5
int main(){
    typedef struct student{
        char name[200];
        int age;
        float percentage;
    }student;
    student arr[MAX];
    for(int i=0; i<MAX; i++) {
        printf("\nstudent number %d:\n",i+1);
        printf("Name: ");
        scanf("%s",arr[i].name);
        
        printf("percentage: ");
        scanf("%f",&arr[i].percentage);

        printf("age;  ");
        scanf("%d",&arr[i].age);
 

    }
    printf("student name who got 60 or 60+ are : \n ");
    for(int i=0; i<MAX; i++){
        if(arr[i].percentage>=60){
            printf("name: %s  \n",arr[i].name);
            
            printf("age: %d \n",arr[i].age);
            printf("percentage: %f \n",arr[i].percentage);
        }
    }
    
}