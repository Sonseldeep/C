#include<stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20
int main(void)

{
    float f, c;
   

    for ( f = LOWER; f<= UPPER; f+= STEP){
        printf("%2.0f \t %3.2f \n",f , c = (5.0/9.0)* (f-32.0) );
    }

}