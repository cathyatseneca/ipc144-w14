#include <stdio.h>

int main(void){
   int first;
   int second;
   int third;
   printf("enter a number: ");
   scanf("%d",&first);
   printf("enter a number: ");
   scanf("%d",&second);
   printf("enter a number: ");
   scanf("%d",&third);

   order();
   
   printf("the numbers in order from small to big were:");
   printf("%d, %d, %d\n",first,second,third);

}
