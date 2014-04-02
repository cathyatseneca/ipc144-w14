/*this program will read the file called dogs.txt and
  print out the data from there*/
#include <stdio.h>
int main(void){
    int age;
    char name[40];
    char breed[30];

    //open
    FILE* myfile=fopen("dogs.txt","r");

    while(fscanf(myfile,"%[^;];%[^,],%d\n",name,breed,&age)==3){
        printf("name: %s\n",name);
        printf("    breed: %s\n",breed);
        printf("    age: %d\n",age);
        printf("\n");
    }
    //read-process
 

    //close
    fclose(myfile);
}
