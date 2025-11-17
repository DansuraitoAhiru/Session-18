#include <stdio.h>
int update(int *arr, int newValue, int pos){
	arr[pos]=newValue;
}
int main(){
	int arr[]={10,20,30,40,50};
	int i;
	int size=sizeof(arr)/sizeof(int);
	printf("Mang goc: ");
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
	update(arr,69,2);
	printf("\nMang sau lhi cap nhat: ");
	for(i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
