#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void nhapMang(int a[],int n){
	srand(time(NULL));
	int i;
	for (i=0;i<n;i++){
		a[i]=-1*(rand() % 100 + 1);
	}
}
void xuatMang(int a[],int n){
	int i;
	for (i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main (){
	int size;
	int a[size];
	printf("Nhap kich thuoc cua mang: ");
	scanf ("%d",&size);
	nhapMang(a, size);
	xuatMang(a,size);
	return 0;
}
