#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
void selectionSort(int arr[], int n) {
    int i,j;
	for (i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}
int main() {
	int i,a,j,n;
	printf("Nhap gia tri so luong phan tu trong mang:");
	scanf ("%d",&n);
	int arr[n];
	printf("Nhap gia tri cho cac phan tu trong mang:\n");
	for (i = 0; i < n; i++) {
		printf("Nhap gia tri cho phan tu thu %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("\nMang vua nhap:\n");
	for (i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	bubbleSort(arr, n);
	printf("\n");
	printf("Mang sap xep bubble sort\n");//mat 2.49s
	for (i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	selectionSort(arr, n);
	printf("\n");
	printf("Mang sap xep selection sort\n");//mat 2.49s
	for (i = 0; i < n; i++) {
		printf("%d\t", arr[i]);
	}
	return 0;
}

