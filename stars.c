/*this program will ask the user to enter a number and it will
  print that many stars on 1 line.  User must enter value that is 
positive but no more than 75*/
#include <stdio.h>

int main(void){
  int numberToPrint;
  int i;   //counter

  printf("enter how many stars you want printed: ");
  scanf("%d",&numberToPrint);
  while(numberToPrint <= 0 || numberToPrint > 75){
//  while( !(numberToPrint > 0 && numberToPrint <=75)){
    printf("enter how many stars you want printed: ");
    scanf("%d",&numberToPrint);
  }
  

  
  for(i=0 ; i<numberToPrint  ;i++ ){
     printf("*");
  }
  printf("\n");
  return 0;
}
