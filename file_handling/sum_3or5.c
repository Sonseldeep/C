#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int sum=0;
    for(int a0 = 0; a0 < t; a0++){
       
        if( (a0%3==0) || (a0%5==0) ) sum+=a0;
        
    }
    printf("%d",sum);
    return 0;
}