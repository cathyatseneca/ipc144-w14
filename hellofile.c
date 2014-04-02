//for files we still need stdio.h
#include <stdio.h>

int main(void){
    //myfile is a variable that points to a struct about a file
    FILE* myfile;        

    //fopen stands for file open
    //first parameter for a file is the file name (a null terminated 
    //string)
    //the second parameter is the way with which we will be using the
    //file "w" stands for write (output, erase old).  "a" (output, 
    //append to end of file).  "r"(input, read)
    
    myfile = fopen("hello.txt","w");

    fprintf(myfile,"hello world!\n");

    fclose(myfile);
    return 0;
}
