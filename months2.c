#include <stdio.h>
int main(void){
  int month;
  int numberOfDays;
  printf("enter a month: ");
  scanf("%d",&month);
  
  switch(month){
    case 1: numberOfDays=31; 
            break;
    case 2: numberOfDays=28; 
            break;
    case 3: numberOfDays=31; 
            break;
    case 4: numberOfDays=30; 
            break;
    case 5: numberOfDays=31; 
            break;
    case 6: numberOfDays=30; 
            break;
    case 7: numberOfDays=31; 
            break;
    case 8: numberOfDays=31; 
            break;
    case 9: numberOfDays=30; 
            break;
    case 10: numberOfDays=31; 
            break;
    case 11: numberOfDays=30; 
            break;
    case 12: numberOfDays=31; 
            break;
    default:
	printf("error\n");
  }


  printf("number of days: %d\n",numberOfDays);
}
