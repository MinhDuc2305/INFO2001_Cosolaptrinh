#include <stdio.h>
int main (){
	int n,i,sum=0;
	printf("Nhap so n: ");
	scanf ("%d",&n);
	for (i=0;i<=n;i++){
		sum+=i;
	}
	printf("Tong tu 1 den %d la: %d",n,sum);
	return 0;
}
