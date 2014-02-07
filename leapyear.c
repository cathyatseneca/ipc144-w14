#include <stdio.h>

/*write a program that will ask the user to enter a year.
  if the user enters a year that is a leap year it will
  print that the year is a leap year.  and if it isn't it
  will print that it is not*/

int main(void){
  int year;
  /*ask user for a year*/
  printf("Please enter a year: ");
  /*read it in*/
  scanf("%d",&year);
  /*in brackets below fill in your leap year expression (replace
    current contents*/
  if((year%4 == 0 && year % 100!=0) || year % 400 ==0){ 
    printf("%d is a leap year\n",year);
  }
  else{
    printf("%d is not a leap year\n",year);
  }
  
}
