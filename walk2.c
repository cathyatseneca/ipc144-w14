void go(int v){
    int i;
    for(i=0;i< v;i++){
        printf("*");
    }
    v = 0;
    printf("\n");
}
void show(int a, int b, int c){
    printf("%d: ",a);
    go(a);
    printf("%d: ",b);
    go(b);
    printf("%d: ",c);
    go(c);
}
int chop(int v){
    int rc=v/2 + 1;
    return rc;
}
int main(void){
    int alpha = 7;
    int beta = 8; 
    int gamma = 9; 




    printf("alpha: %d, beta:%d, gamma:%d\n",alpha,beta,gamma);
    alpha = chop(alpha);
    beta = chop(beta);
    gamma = chop(gamma);
    printf("alpha: %d, beta:%d, gamma:%d\n",alpha,beta,gamma);

    show(alpha,beta,gamma);
    printf("alpha: %d, beta:%d, gamma:%d\n",alpha,beta,gamma);
 
    return 0;
}

