#include <stdio.h>
int sum(int a,int b, int *sum){
	*sum=a+b;
}
int main(){
	int tong;
	sum(69,100,&tong);
	printf("Tong = %d",tong);
}
