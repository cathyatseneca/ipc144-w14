/*this program asks the user to enter the name of a file.
  it will then open the file for reading.  Once it has done that
  it will count up the number of non-space characters in the file and 
  display that information*/

#include <stdio.h>
#include <ctype.h>

int main(void){
     char fileName[40];

     //read from user a file name
     printf("enter a file name: ");
     scanf("%s",&fileName);
     printf("counting characters in %s\n",fileName);

     //open the file for reading
     FILE* theFile;
     theFile = fopen(fileName,"r");

     int numChars=0;
     char curr;
     //count the characters in the file
     //read a character from the file
     while(fscanf(theFile,"%c",&curr) == 1){
         //if it is a non-space count it
         if(!isspace(curr)){
             numChars++;
         }
     }
     printf("The file has %d non-space characters\n",numChars);
     fclose(theFile);
     return 0;
}
