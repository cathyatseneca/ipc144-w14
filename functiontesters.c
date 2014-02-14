#include <stdio.h>
int isLeapYear(int);
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
   else{
     printf("isLeapYear(2014) returns correct return value\n");
   }
   rc = isLeapYear(2000);
   if(rc == 0){
     printf("Your isLeapYear function is not working\n");
     printf("isLeapYear(2000) should have returned a true value\n");
     printf("but it returned a false value\n");
   }
   else{
     printf("isLeapYear(2000) returns correct return value\n");
   }

   rc = isLeapYear(2012);
   if(rc == 0){
     printf("Your isLeapYear function is not working\n");
     printf("isLeapYear(2012) should have returned a true value\n");
     printf("but it returned a false value\n");
   }
   else{
     printf("isLeapYear(2012) returns correct return value\n");
   }
   rc = isLeapYear(1900);
   if(rc != 0){
     printf("Your isLeapYear function is not working\n");
     printf("isLeapYear(1900) should have returned a false value\n");
     printf("but it returned a true value\n");
   }
   else{
     printf("isLeapYear(1900) returns correct return value\n");
   }

   printf("smallest(2,5,-1) returned %d, should return -1\n",smallest(2,5,-1));
   printf("smallest(10,20,30) returned %d, should return 10\n",smallest(10,20,30));
   printf("smallest(10,-5,20) returned %d, should return -5\n",smallest(10,-5,20));
   printf("smallest(10,10,10) returned %d, should return 10\n",smallest(10,10,10));
   printf("smallest(-12,5,-12) returned %d, should return -12\n",smallest(-12,5,-12));

   return 0;

   
}
