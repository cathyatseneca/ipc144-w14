#include <stdio.h>
float average(int array[],int size);
/*write a function called printArray.  This function
  is passed an array, a size and the maximum number of
  values to print per line.  It will print
  all the values in the array, separated by spaces.
  Each line of output must not exceed the maximum number of values
  to print per line*/
void printArray(int array[],int size,int maxPerLine);  

int main(){
	int mydata1[10]={5,10,15,20,25,30,35,40,45,50};
	int mydata2[20]={1,3,5,7,11,13,17,19,23,29,31,37};

	return 0;
}
void printArray(int array[],int size,int maxPerLine){
	
}



float average(int array[],int size){
	int i;
	float sum=0;
	for(i=0;i < size;i++){
		sum = sum + array[i];
	}
	return sum/size;

	
}