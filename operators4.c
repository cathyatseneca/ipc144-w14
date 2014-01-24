#include <stdio.h>

int main(void){

  int x=0;
  //prints 1 to 5
  printf("%d\n", ++x );
  printf("%d\n", ++x );
  printf("%d\n", ++x );
  printf("%d\n", ++x );
  printf("%d\n", ++x );


  int y=0;
  //prints 0 to 4
  printf("%d\n",y++ );
  printf("%d\n",y++ );
  printf("%d\n",y++ );
  printf("%d\n",y++ );
  printf("%d\n",y++ );
}
