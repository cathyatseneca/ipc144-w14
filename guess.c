/*this program will randomly pick a number between 1 and 1000.  It will 
then ask the user to enter a guess.  If the user guesses the wrong value,
program tells user whether the number is higher or lower than the user's 
guess.  Once the user guesses the value correctly, program will tell the 
user they are correct, the number of guesses it took to get the correct 
value and terminate*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
     /*generate random number between 1 and 1000*/
     int secret=(rand()%1000) +1;
     int guess;
     int numGuess=0;
     
     /*ask user for a guess*/
     printf("Enter a guess: ");
     scanf("%d",&guess);
     /*count the guess*/
     numGuess++;
     /*alternatives:
        numGuess=numGuess+1;
        numGuess+=1;
       what does not work is:
        numGuess=numGuess++;
     */

     while(guess != secret){
	if(guess > secret){
           /*print guess is too high*/
           printf("%d is too high\n",guess);
        }
        else{
            /*print guess is too low*/
           printf("%d is too low\n",guess);
        }
        /*ask user for a guess*/
        printf("Enter a guess: ");
        scanf("%d",&guess);
        /*count the guess*/
        numGuess++;
     }
     /*print it was correct*/
     printf("%d is correct!\n",guess);
     /*print how many guesses*/
     printf("That took %d guesses\n",numGuess);

}
