#include <stdio.h>
void inputArray(float arr[], int size) {
    int i;
	printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < size; ++i) {
        printf("arr[%d] = ", i);
        scanf("%f", &arr[i]);
    }
}
void outputArray(float arr[], int size) {
    int i;
	printf("Mang da nhap la:\n");
    for (i = 0; i < size; ++i) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
int main (){
	int size;
	float a[size];
	printf("Hay nhap kich thuoc mang: ");
	scanf ("%d",&size);
	inputArray(a, size);
	outputArray(a, size);
	return 0;
}
