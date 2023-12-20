#include<stdio.h>
int main(void){
    int index=-1;
    int a[]={1,2,3,4,5};
    for (int i=0; i<5; i++){
        if(a[i]==4){
           
            index =i;
             printf("found with index %d \n",index);
            return 1;
        }
    }
    printf("not found\n");
    return -1;
}