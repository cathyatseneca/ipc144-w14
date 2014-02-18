int extract(int v);
void draw(int alpha, int beta);

int main(void){
    //For first, use middle 3 digits of student number, for 
    //second use last 3 digits, drop all leading 0's
    //example if student number is: 123-456-078 then use:
    //first = 456, second = 78.  Fill in the blanks
    int first =_____________;
    int second =____________;
    printf("first: %d, second %d\n",first,second);

    int alpha = extract(first);
    int beta = extract(second);
    printf("first: %d, second %d\n",first,second);
    printf("alpha: %d, beat %d\n",alpha,beta);

    draw(alpha,beta);
    return 0;
}
int extract(int v){
    v = v % 100;
    printf("A - v: %d\n",v);
    v = v / 10;
    printf("B - v: %d\n",v);
    if(v > 5 || v < 3){
        v=4;
    }    
    printf("C - v: %d\n",v);    
    return v;
}
void draw(int alpha,int beta){
    int i,j;
    for(i=0;i<alpha;i++){
        if(i%2){
            for(j=0;j<beta;j++){
                printf("*");
            }
        }
        else{
            for(j=0;j<beta;j++){
                printf("=");
            }           
        }
        printf("\n");
    }
}

