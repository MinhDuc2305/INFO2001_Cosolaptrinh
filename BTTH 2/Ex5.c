#include <stdio.h>
int main()
{
	int r;
	float s,c;
	const float PI = 3.14;
	printf("Nhap vao ban kinh cua hinh tron: ");
	scanf ("%d", &r);
	c= 2*PI*r;
	s= PI*r*r;
	printf ("Chu vi, dien tich cua hinh tron la: %.2f %.2f", c,s);
	return 0;
}
