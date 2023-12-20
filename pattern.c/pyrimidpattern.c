//   *
//  ***
// *****
//*******
  #include<stdio.h>
  int main(void){
    for(int row=1; row<=4; row++){
        for(int space=1; space<=4-row;space++){
            printf(" ");
            
        }
        for(int star=1; star<=2*row-1; star++){
            printf("*");
        }
printf("\n");
       
    }
    
  } 