#include<stdio.h>
int main(void){ 
    // pyrimid patter
    for(int row=1; row<=4; row++){
        for(int space=1; space<=4-row; space++){
            printf(" ");
        }
            for(int star=1; star<=2*row-1;star++){
                printf("*");
            }
              printf("\n");
        }
      for(int row=1; row<=4; row++){
        for(int space=1; space<=row-1; space++){
            printf(" ");
        }
            for(int star=1; star<=2*(5-row)-1;star++){
                printf("*");
            }
              printf("\n");
        }
      // reverse primid pattern
    }
