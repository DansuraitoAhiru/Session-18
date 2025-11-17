#include <stdio.h>
int x=69;
int *p=&x;
int main(){
	printf("Gia tri cua x: %d\n",x);
	printf("Dia chi cua x (dung &x): %d\n",(void*)&x);
	printf("Gia tri cua x (thong qua con tro): %d\n",*p);
	printf("dia chi ma con tro tro toi: %d\n", (void*)p);
}	
