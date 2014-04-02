#include <stdio.h>
int main(void){
    int v;
    int rc;
	printf("enter a number: ");
    rc=scanf("%d",&v);
    while(rc!=1){
    	printf("not a number do it again.:");
    	scanf("%*s\n");
	    rc=scanf("%d",&v);
    }
    printf("you entered: %d\n",v);
    return 0;
    
}