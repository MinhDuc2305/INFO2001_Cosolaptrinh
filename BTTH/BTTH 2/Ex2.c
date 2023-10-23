#include <stdio.h>

int main()
{
	//input
	int A, x;
	printf ("Nhap gia tri x de tinh bieu thuc A= x*3 + 3*x^2 + x + 1 (x<105): ");
	scanf ("%d", &x);
	//process
	A= x*3 + 3*x*2 + x + 1;
	//output
	printf ("Ket qua cua bieu thuc A la: %d ",A);
	return 0;
}
