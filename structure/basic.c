#include<stdio.h>
#include<string.h>

int main(void){
    struct book{
        char name[100];
        char author[100];
        float price;
        int pages;
 
    }a,b,c;

    strcpy(a.name,"The mahabharat"); //  strcpy use garna parxa  char hold garna 
    strcpy(a.author,"Ved Vyash");
    a.price=1560.89;
    a.pages=1980;
    
    printf("name: %s \n",a.name);
    printf("price: %.2f \n",a.price);
    printf("Author: %s",a.author);
    printf("pages: %d \n",a.pages);

}
   