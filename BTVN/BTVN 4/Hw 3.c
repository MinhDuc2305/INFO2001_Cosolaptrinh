#include <stdio.h>
float phepTinh(int r){
	float S=3.14*r*r;
	float C=3.14*2*r;
	printf ("Diet tich hinh tron la: %.2f\n",S);
	printf ("Chu vi hinh tron la: %.2f",C);
    return S,C;
}
int main (){
	int a;
	printf ("Nhap gia tri ban kinh duong tron: ");
	scanf ("%d", &a);
	phepTinh(a);
	return 0;
}
