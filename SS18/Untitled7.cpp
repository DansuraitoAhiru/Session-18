#include <stdio.h>
int arr[]={5,4,2,60,50,22,334,5532,33,234,2345,433};
int size=sizeof(arr)/sizeof(int);
int sort(int *arr){
	int temp;
	for(int i=0;i<size-1;i++){
		for(int j=0;j<size-1-i;j++){
			if(arr[j+1]<arr[j]){
			    temp=arr[j];
			    arr[j]=arr[j+1];
			    arr[j+1]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep: ");
	for(int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	sort(arr);
}
