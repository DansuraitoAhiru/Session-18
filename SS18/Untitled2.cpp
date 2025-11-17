#include <stdio.h>
int swap(int *x, int *y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	int a=36, b=69;
	swap(&a,&b);
	printf("a=%d, b=%d\n",a,b);
}
