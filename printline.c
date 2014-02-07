/*this program will ask the user to enter a positive integer.
  it will then print out that many stars (*) on one line*/

#include <stdio.h>

int main(void){
    int userInput;
    int starCounter=0;

    printf("please enter a positive number: ");
    scanf("%d",&userInput);

    while(userInput <=0){
      printf("value must be positive\n");
      printf("please enter a positive number: ");
      scanf("%d",&userInput);
    }
    while(starCounter < userInput){
        printf("*");
        starCounter++;
    }
    printf("\n");
}
