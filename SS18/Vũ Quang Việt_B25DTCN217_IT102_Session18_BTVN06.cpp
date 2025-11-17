#include <stdio.h>
int arr[]={4,3,5,6,7,202,93,69,99,2003,449};
int size=sizeof(arr)/sizeof(int);
void search(int *arr, int searchValue){
	int found=0;
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==searchValue){
			found=1;
			break;
		}
	}
	if(found){
		printf("%d",i);
	} else {
		printf("Ko co phan tu nao co gia tri bang %d", searchValue);
	}
}
int main(){
	search(arr,69);
}
