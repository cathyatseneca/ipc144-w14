#include <stdio.h>
int isLeapYear(int, int, int);
int smallest(int, int, int);
int rectangle(int, int);

int main(void){
   int rc;
   rc = isLeapYear(2014);
   if(rc != 0){
     printf("Your isLeapYear function is not working\n");
     printf("isLeapYear(2014) should have returned a false value\n");
     printf("but it returned a true value\n");
   }
}
