#include <stdio.h>
void checkNumber(int n){
	if (n%2==0){
	    printf("So chan");
	}
	else {
	    printf("So le");
	}
}
int main(){
	int n;
	printf("Nhap so nguyen n: ");
	scanf ("%d",&n);
	checkNumber(n);
	return 0;
}
