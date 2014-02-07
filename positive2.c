/*this program asks user for a number and prints that the number is positive
  if number is positive.  At the end it prints "the end"*/

int main(void){
  int userInput;
  printf("please enter a number: ");
  scanf("%d",&userInput);
  if(userInput > 0){
    printf("%d is positive\n", userInput);
  }
  else{
    printf("%d is not positive \n",userInput);
  }
  printf("the end\n");
  return 0;
}
