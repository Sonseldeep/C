/* record contains the name of cricketer, his age, number of test matches he played , average runs
he score in each test 20 cricketer */

#include<stdio.h>
#include<string.h>
int main (void){
    typedef struct cricketer{
        char firstname[100];
          char lastname[100];
        int age;
        int number_of_test_match;
        float averageRun;

    } cricketer;
    cricketer arr[3];
    // asking user to input the data
    printf("enter Name of Player, age, number of test match, average run rate:  \n");
    printf("\n");

    for(int i=0; i<3; i++){
        scanf("%s",arr[i].firstname);
        scanf("%s",arr[i].lastname);

        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].number_of_test_match);
        scanf("%f",&arr[i].averageRun);

        
    }
    // to print the data
     for(int i=0; i<3; i++){
        printf(" Name: %s %s\n",arr[i].firstname,arr[i].lastname);
        printf(" Age: %d \n",arr[i].age);
        printf(" Number of Test Match: %d \n",arr[i].number_of_test_match);
        printf(" Average Run rate: %f \n",arr[i].averageRun);
        printf(" \n");

        
    }

}