#include <stdio.h>
void readNumber(int n) {
    const char *units[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
    const char *powers[] = {"", "muoi", "tram"};
    int tram = n / 100;
    int chuc = (n % 100) / 10;
    int donvi = n % 10;
    if (tram > 0) {
        printf("%s %s ", units[tram], powers[2]);
    }
    if (chuc > 1) {
        printf("%s ", units[chuc]);
        if (donvi == 0) {
            printf("muoi %s");
        }
        else if (donvi>0) printf("muoi %s",units[donvi]);
    } 
	else if (chuc == 1) {
        printf("muoi ");
        if (donvi > 0) {
            printf("%s", units[donvi]);
        }
    }
	else if (chuc==0 && tram!=0 && donvi!=0){
		printf ("le %s",units[donvi]);
	} 
	else {
        if (donvi > 0) {
            printf("%s", units[donvi]);
            
        }
    }
}

int main() {
    int n;
    do {
        printf("Nhap so nguyen duong n (0 < n < 1000): ");
        scanf("%d", &n);
    } while (n <= 0 || n >= 1000);
    readNumber(n);
    return 0;
}
