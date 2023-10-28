#include <stdio.h>
int main(){
	long long n;
	printf("Nhap gia tri cua n: ");
	scanf ("%lld",&n);
	int sumeven=0, sumodd=0,digit;
	while (n>0){
		digit=n%10;
		if (digit%2==0){
			sumeven+=digit;
		}
		else {
			sumodd+=digit;
		}
		n/=10;
	}
	printf("Tong chu so chan la: %d\n",sumeven);
	printf("Tong chu so le la: %d\n",sumodd);
	return 0;
}
