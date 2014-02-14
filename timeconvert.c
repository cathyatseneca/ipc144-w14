#include <stdio.h>
void getTime(int totalMin,int* hour, int* minute){
  *hour=totalMin/60;
  *minute=totalMin%60;
}
int main(void){
   int total;
   int hour;
   int minutes;

   printf("Enter a total time: ");
   scanf("%d",&total);

   getTime(total,&hour,&minutes);  

   printf("%d minutes is: %d:%2d\n",total,hour,minutes);
   return 0;
}
