#include <stdio.h>
#include <string.h>
int main(){
	char inputString[1000];
	char reverseString[1000];
	printf("Nhap chuoi: ");
	fgets(inputString, sizeof(inputString), stdin);
	inputString[strcspn(inputString,"\n")]=0;
	char *pInput=inputString;
	char *pReverse=reverseString;
	for(int i=strlen(inputString)-1;i>=0;i--){
		*(pReverse++)=*(pInput+i);
	}
	*pReverse='\0';
	printf("Chuoi goc: %s\n", inputString);
	printf("Chuoi dao nguoc: %s", reverseString);
}
