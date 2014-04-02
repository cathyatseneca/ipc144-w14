#include <stdio.h>

int main(void){
  int d;
  int rc;
  printf("enter a number: ");
  rc=scanf("%d",&d);
  if(rc != 1){
     printf("something went wrong with read\n");
  }
  else
     printf("number is %d\n",d);
  
}
