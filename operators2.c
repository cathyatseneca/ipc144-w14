#include <stdio.h>

int main(void){
    int a;
    int b=5;
 
    b+=(a=3);

    printf("a: %d, b: %d\n",a,b);

    return 0;
}
