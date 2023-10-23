#include <stdio.h>
int main()
{
	int A, B, tong, hieu, tich;
	float thuong;
	printf("Nhap 2 so nguyen A, B (-109<= A,B <=109): ");
	scanf ("%d %d", &A, &B);
	tong= A+B;
	hieu= A-B;
	tich= A*B;
	thuong= A/B;
	printf("Tong, hieu, tich, thuong cua 2 so A, B la: %d %d %d %.2f", tong, hieu, tich, thuong);
	return 0;
}
