#include <stdio.h>
int arr[]={36,54,98,96,59,69,77};
int size=sizeof(arr)/sizeof(int);
void printArr(int *arr, int size){
	for(int i=0;i<size;i++){
		printf("%d ", *(arr+i));
	}
}
int main(){
	printArr(arr,size);
}
