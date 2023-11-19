#include <stdio.h>
void inputArray(int arr[], int size) {
    int i;
	printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        arr[i]=0;
    }
}
void outputArray(int arr[], int size) {
    int i;
	printf("Mang da nhap la:\n");
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main (){
	int size;
	int a[size];
	printf("Hay nhap kich thuoc mang: ");
	scanf ("%d",&size);
	inputArray(a, size);
	outputArray(a, size);
	return 0;
}
