#include <stdio.h>
int linearSearch(int key, int array[],int size){
	int rc=-1;   //we use -1 to indicate it is not found
	int i;
	for(i=0;i<size && rc == -1;i++){
		if(array[i]==key){
			rc=i;
		}
	}

	return rc;

}
int binarySearch(int key,int array[],int size){
	int low=0;
	int high=size-1;
	int mid;
	int rc=-1;
	while(low <= high && rc == -1){
		mid = (low+high)/2;
		if(key < array[mid]){
			high=mid-1;
		}
		else if(key > array[mid]){
			low = mid+1;
		}
		else{
			rc=mid;
		}
	}
	return rc;
}
void bubbleSort(int array[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1-i;j++){
			if(array[j] > array[j+1]){
				int tmp=array[j];
				array[j]=array[j+1];
				array[j+1]=tmp;
			}
		}
	}
}
void printArray(int array[],int size,int maxPerLine){
	int i;
	for(i=0;i<size;i++){
		printf("%d",array[i]);
		if(i%maxPerLine != maxPerLine -1 ){
			printf(" ");
		}
		else{
			printf("\n");
		}

	}
	printf("\n");
}
void insertionSort(int array[],int size){
	int i,j;
	int tmp;
	for(i=1;i<size;i++){
		tmp=array[i];
		for(j=i;array[j-1] > tmp && j>0;j--){
			array[j]=array[j-1];
		}
		array[j]=tmp;
	}
}
void selectionSort(int array[],int size){
	int i,j;
	for(i=0;i<size-1;i++){
		int minIdx=i;
		for(j=i+1;j<size;j++){
			if(array[j] < array[minIdx]){
				minIdx=j;
			}
		}
		int tmp=array[minIdx];
		array[minIdx]=array[i];
		array[i]=tmp;
	}
}
int main(void){
	int array[25]={5,6,7,1,2,3,-10,56,100,-1};
	int location;
	int key=-20;
	location = linearSearch(key,array,10);
	printf("the number %d was found at : %d\n",key,location);
	selectionSort(array,10);
	printArray(array,10,10);
}









