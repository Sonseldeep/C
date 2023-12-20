#include<stdio.h>
int main(void)
{
    float f,c;
    float upper, lower, step;
    upper = 300;
    lower = 0;
    step = 20;
    c= (5.0/9.0) *(f-32);
    for(f = lower; f<= upper; f+= step) {
        printf("%3.0f \t %6.2f \n",f,c);
    }    
}