/*this program will ask the user to enter a number and it will
  print that many stars on 1 line.  User must enter value that is 
positive but no more than 75*/
#include <stdio.h>
/*this function will ask the user for a number and check
  to make sure that the number is in range.  if it isn't
  it will repeated ask for a number until a good number is 
  etnered.  Function will return the value user entered*/
int getValid(int min, int max);
/*write a function that will print a row of stars.  This function
  will accept a number that represents the number of stars to print
  and returns nothing*/
void printStars(int numStars);
int main(void){
  int numberToPrint;
  numberToPrint=getValid(10,75);
  printStars(numberToPrint);
  return 0;
}

int getValid(int min, int max){
  int numberToPrint;
  printf("enter how many stars you want printed: ");
  scanf("%d",&numberToPrint);
  while(numberToPrint < min || numberToPrint > max){
    printf("enter how many stars you want printed: ");
    scanf("%d",&numberToPrint);
  }
  return numberToPrint;
}

void printStars(int numStars){
  int i;   //counter
  for(i=0 ; i<numStars ;i++ ){
     printf("*");
  }
  printf("\n");
}

