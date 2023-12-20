#include<stdio.h>
 int main(void)
{
    int fahr, cel;
    int lower, upper, step;
    lower =0;
    upper = 300;
    step = 20;
    fahr = lower;
    while ( fahr <= upper){
        cel= 5*(fahr-32)/9;
        printf("%d\t %d \n", fahr,cel);
        fahr += step;
    }


}