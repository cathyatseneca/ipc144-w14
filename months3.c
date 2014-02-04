#include <stdio.h>
int main(void){
  int month;
  int numberOfDays;
  printf("enter a month: ");
  scanf("%d",&month);
  
  //can do this BUT it is ERROR PRONE SO BE VERY CAUTIOUS
  switch(month){
    case 4: 
    case 6: 
    case 9: 
    case 11: numberOfDays=30;
            break;
    case 2:numberOfDays=28;
           break;
    default:
	numberOfDays=31;
  }


  printf("number of days: %d\n",numberOfDays);
}
