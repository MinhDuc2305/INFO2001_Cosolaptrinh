#include <stdio.h>
#include <math.h>
int main(){
	int n,i,check=1;
	printf("Nhap so nguyen n: ");
	scanf ("%d",&n);
	if (n<2){
		check=0;
	}
	else {
		for (i=2;i<=sqrt(n);i++)
		   if (n%i==0){
			  check=0;
			    break;
		}
	}
	if (check){
		printf("n la so nguyen to");
	}
	else {
		printf("n khong phai la so nguyen to");
	}
	return 0;
}
