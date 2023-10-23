#include <stdio.h>
int main (){
	//B1. Input
	int S, a,b,c;
	printf("Nhap gia tri a,b,c: ");
	scanf("%d %d %d", &a,&b,&c);
	//B2.Process
	S = a*(b+c)+b*(a+c);
	
	//B3.Output
	printf("Gia tri cua bieu thuc S = a*(b+c)+b*(a+c) la: %d",S);
	return 0;
}
