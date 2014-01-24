#include <stdio.h>

int main(void){
  int a=5;
  int b;

  b=(a+=1);
  printf("a = %d, b=%d\n",a,b);
}
