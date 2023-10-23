#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,x,y;
	float d,z;
	printf("Nhap nhiet do cua toa do 2 diem (a,b), (x,y): ");
	scanf ("%d, %d, %d, %d",&a, &b, &x, &y);
	d=((a-x)^2)+((b-y)^2);
	z=sqrt(d);
	printf("Khoang cach giua 2 diem la: %.2f",z);
	return 0;
}
