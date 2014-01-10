//this first line is a comment
//it's in the code to explain what the code does
//compiler will ignore all comments

//this next line is a preprocessor statement
//to use a library function we have to include 
//the header for the library we are using
//in this case stdio (standard input output)
#include <stdio.h>
/*this next line of code starts the function 
  main().  Every C program has a main() function
  it is where the program starts.  
  the int is the type of data the program gives 
  back when it is finished.  the void is what 
  the program needs when it starts */
int main(void){
	//this next line calls the printf() function
	//from the stdio library and prints the 
	//text welcome to ipc144 to the screen
	//the \n is a newline character
	//other non-typable: 
	// \ is \\
	// tab is \t	
    printf("welcome to ipc144\n");
    //this line goes back to operating system
    return 0;
}
