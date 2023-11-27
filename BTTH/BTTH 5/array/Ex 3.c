#include <stdio.h>
#define MAX_STUDENTS 50 
int main() {
    int n, i;
    float marks[MAX_STUDENTS], sum = 0.0, average;
    printf("Nhap so luong sinh vien trong lop: ");
    scanf("%d", &n);
    if (n <= 0 || n > MAX_STUDENTS) {
        printf("So luong sinh vien khong hop le.\n");
        return 1;
    }
    for (i = 0; i < n; i++) {
        printf("Nhap diem cua sinh vien %d: ", i + 1);
        scanf("%f", &marks[i]);
		sum += marks[i];
    }
	average = sum / n;
	printf("Diem trung binh cua lop la: %.2f\n", average);
	return 0;
}
