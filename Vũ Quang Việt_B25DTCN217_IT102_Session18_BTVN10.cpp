#include <stdio.h>
int arr[]={2,5,7,9,17,21};
int size=sizeof(arr)/sizeof(int);
void del(int *arr, int pos){
	for(int i=pos;i<size-1;i++){
		*(arr+i)=*(arr+i+1);
	}
	size--;
	printf("Mang sau khi xoa: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	del(arr,2);
}
