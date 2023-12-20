// linewar search
#include<stdio.h>

int main( void)
{
    int numbers[]= {10,20,30,40};
    int n=10;
    for (int i=0; i<4; i++)
    {
        if (numbers[i]==n)
        {
            printf("found \n");
            return 0;

        }
    }
    printf("not found\n");
    return -1; // -1 found nothing
}