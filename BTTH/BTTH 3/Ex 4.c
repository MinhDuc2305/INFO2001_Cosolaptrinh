#include <stdio.h>
int main(){
	int n,i,tong=0;
	printf("Nhap gia tri nguyen duong n: ");
	scanf ("%d",&n);
	for (i=1;i<=n;i++){
		tong+= i*i;
	}
	printf("Tong gia tri nguyen duong n la: %d", tong);
	return 0;
}
