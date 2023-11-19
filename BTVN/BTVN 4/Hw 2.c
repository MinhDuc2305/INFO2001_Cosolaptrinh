#include <stdio.h>
int phepTinh(int a, int b){
	int S=a*b;
	int C=(a+b)*2;
	printf ("Diet tich hinh chu nhat la: %d\n",S);
	printf ("Chu vi hinh chu nhat la: %d",C);
    return S,C;
}
int main (){
	int a,b;
	printf ("Nhap gia tri chieu dai, chieu rong: ");
	scanf ("%d %d", &a, &b);
	phepTinh(a,b);
	return 0;
}
