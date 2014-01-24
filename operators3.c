#include <stdio.h>

int main(void){
    int a=5;
    int b=5;
    int c=5;
    int d=5;

    int w;
    int x;
    int y;
    int z;

    printf("a, b, c and d all start at 5\n");
    printf("w=a++\n");
    w=a++;
    printf("a: %d, w: %d\n",a,w);

    printf("x=++b\n");
    x=++b;
    printf("b: %d, x: %d\n",b,x);

    printf("y=c--\n");
    y=c--;
    printf("c: %d, y: %d\n",c,y);

    printf("z=--d\n");
    z=--d;
    printf("d: %d, z: %d\n",d,z);

    return 0;
}
