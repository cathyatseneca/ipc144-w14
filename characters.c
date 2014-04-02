#include <stdio.h>

int isUpper(char ch){
  int rc=0;
  if(ch >= 'A' && ch <='Z'){
	rc=1;
  }
  return rc;
}

/*if ch is upper case this function will return the lower case
  version of ch.  Otherwise it will return ch*/
char toLower(char ch){
    int difference = 'a'-'A';
    if(isUpper(ch)){
	ch = ch + difference;
    }
    return ch;
}

int main(void){
   if(isUpper('a')){
      printf(" a is upper case\n");
   }
   else{
     printf(" a is not upper case\n");
   }
   printf("lower case verson of: Z is %c\n",toLower('Z'));
}
