/*this program will ask the user to input a number,  It will then
  print the number back out to the user*/
#include<stdio.h>

int main(void){

  /*create a variable to hold a whole number*/
  int userInput;

  /*ask user to enter a number*/
  printf("Enter a number: ");

  /*read the number in to the variable*/
  scanf("%d",&userInput);

  /*print out that number by printing the variable*/
  printf("The number you entered was: %d\n",userInput);

  return 0;

}

