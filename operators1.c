#include <stdio.h>

int main(void){
    int a=5;
    int b=6;
 
    b=a+=3;

    printf("a: %d, b: %d\n",a,b);

    return 0;
}
