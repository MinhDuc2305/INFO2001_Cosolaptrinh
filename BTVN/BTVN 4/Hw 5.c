#include <stdio.h>
#include <math.h>
int checkFistSquares(int num) {
    int root = sqrt(num);
    return (root * root == num);
}
void listFirstNSquares(int n) {
    int i;
	printf("%d so chinh phuong dau tien la: \n", n);
    for (i = 1; n > 0; ++i) {
        if (checkFistSquares(i)) {
            printf("%d ", i);
            n--;
        }
    }
    printf("\n");
}
int main() {
    int n;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);
    listFirstNSquares(n);
    return 0;
}
