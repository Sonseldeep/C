#include<stdio.h>
#include<string.h>

int main(void){

/** float x ko thau ma realnumber =x use garna pahinxa
  typedef float realnumber;
float x=23.90;
realnumber y=23.90;
printf("the value os x  and  y is %.2f , %.2f\n",x);
*/


typedef struct Book{
    char name[100];
    char author[100];
    int number_of_pages;
    float prices;
}Book; 
// aabo struct book B1 garna pardina
Book B1;
strcpy(B1.name,"Programming with C");
strcpy(B1.author,"Jitendra Kumar Chhabra");
B1.number_of_pages=567;
B1.prices=980.89;

Book B2;
strcpy(B2.name,"Digital Fundamentals");
strcpy(B2.author,"M.Morris Manno");
B2.number_of_pages=980;
B2.prices=1890.87;

// to print the B1 details;
printf(" \n");
printf("Name: %s\n",B2.name);
printf("Authour: %s\n",B2.author);
printf("Number of Pages: %i\n",B2.number_of_pages);
printf("Price: %.2f\n", B2.prices);

printf(" \n");

printf("Name: %s\n",B2.name);
printf("Authour: %s\n",B2.author);
printf("Number of Pages: %i\n",B2.number_of_pages);
printf("Price: %.2f\n", B2.prices);
}