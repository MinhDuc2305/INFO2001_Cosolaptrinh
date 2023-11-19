#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool nguyenTo(int n){
	int i;
	if (n<2)
	    return false;
	for (i=2;i<=sqrt(n);i++){
		if (n%i==0)
		   return false;
	}
	return true;
}
void checkNguyento(int n){
	int i;
	printf("Cac so nguyen to nho hon %d la: ",n);
	for (i=2;i< n;i++){
		if (nguyenTo(i))
		    printf("%d ",i);
	}
}
int main (){
	int a;
	printf("Nhap mot gia tri bat ky: ");
	scanf ("%d",&a);
	if (a<=2)
        printf("Khong co so nguyen to nao nho hon so %d", a);
    else 
        checkNguyento(a);
    return 0;
}
