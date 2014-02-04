#include <stdio.h>
int main(void){
  int month;
  int numberOfDays;
  printf("enter a month: ");
  scanf("%d",&month);

  if(month == 2){
    numberOfDays=28;
  }
  else{
    if(month == 4 || month == 6 || mont== 9|| month==11){
       numberOfDays=30;
    }
    else{
       numberOfDays=31;
    }
  }
  printf("number of days: %d\n",numberOfDays);
}
