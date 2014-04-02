#include <stdio.h>
#include <ctype.h>
#include <string.h>   //library for dealing with null terminated
                      //strings.
//this function will upper case all lower case characters of
//s
void upperCase(char s[]){
    int i;
    for(i=0;s[i]!='\0';i++){
        s[i]=toupper(s[i]);
    }
}

void upperCaseV2(char s[]){
    int i;
    int size=strlen(s);   //strlen is short for string length
                          //returns number of characters in s NOT
                          //counting the null character
    for(i=0;i < size;i++){
        s[i]=toupper(s[i]);
    }
}

void upperCaseV3(char s[]){
    int i;
    for(i=0;i < strlen(s);i++){
        s[i]=toupper(s[i]);
    }
}
int main(void){
   //for null terminated strings, the size must be
   //1 bigger than the number of visible characters
   //hello world! is 12 characters total so we need
   //13 for array because it is these 12 + the terminating
   //null character ('\0')
   char str[13]="hello world!";
   printf("%s\n",str);
   upperCase(str);
   printf("upper case version: %s\n",str);

   char s1[5] = "abcd";
   char s2[5] = "efgh";

   printf("strcmp(\"abcd\",\"abcd\"); =  %d\n",strcmp(s1,s1));
   printf("strcmp(\"abcd\",\"efgh\"); =  %d\n",strcmp(s1,s2));
   printf("strcmp(\"efgh\",\"abcd\"); =  %d\n",strcmp(s2,s1));
   printf("strcmp(\"abcd\",\"azgh\"); =  %d\n",strcmp(s1,"azgh"));
   
  char s3[5]="zzzz";
  strcpy(s3,s1);
  printf("%s\n",s3);
}
