#include<stdio.h>
int upperTriangle(){
     for(int i=0; i<=6; i++){
        for(int j=0; j<i; j++){
            printf("*",j);
        }
        printf("\n");
    }
}
     
     int lowerTrianle(){
        for(int i=0; i<=6; i++){
        for(int j=0; j<i; j++){
            printf("*",j);
        }
        printf("\n");
    }

     }
     int stand(){
         
     for(int i=0; i<=2; i++){
        for(int j=0; j<i; j++){
            printf("* \n",j);
        }
       
    }

     }
int main(void){
     upperTriangle();
     lowerTrianle();
     stand();
   
     
}