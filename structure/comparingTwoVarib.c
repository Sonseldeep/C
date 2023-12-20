#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(void){

    typedef struct date{
        int date;
        int month;
        int year;
    }date;


    date a,b;
    a.date= 10;
    a.month= 07;
    a.year = 2078;

    b.date= 10;
    b.month= 07;
    b.year= 2078;
    bool flag = true;

    if(a.date!=b.date) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag =false;
 if( flag==true) printf("same \n");
    
         else printf("different \n");
    
 }
            
        

    



