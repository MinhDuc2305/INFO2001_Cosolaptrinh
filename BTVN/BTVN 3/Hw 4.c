#include <stdio.h>
int main (){
	int sumodd=0,digit,n;
	printf("Nhap n: ");
	scanf ("%d",&n);
	while (n>0){
		digit=n%10;
		if (digit%2!=0){
			sumodd+=digit;
		}
		n/=10;
	}
	printf("Tong cua so le la: %d",sumodd);
}
