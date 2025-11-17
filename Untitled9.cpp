#include <stdio.h>
int arr[]={4,7,6,94,39,36,43,33};
int size=sizeof(arr)/sizeof(int);
void add(int *arr, int pos, int value){
	for(int i=size;i>pos;i--){
		*(arr+1)=*(arr+i-1);
	}
	arr[pos]=value;
	size++;
	printf("Mang sau khi them: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	add(arr,4,999);
}		
