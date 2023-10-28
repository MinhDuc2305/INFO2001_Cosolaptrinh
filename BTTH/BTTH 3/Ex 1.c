#include <stdio.h>
int main(){
	long long n;// dung` long long vi gia tri cua n nam trong khoang -1018 den 1018
	printf("Nhap vao so nguyen n:");
	scanf ("%lld",&n);
	if (n%3==0 && n%5==0){
		printf("1");
	}
	else {
		printf("0");
	}
	return 0;
}
