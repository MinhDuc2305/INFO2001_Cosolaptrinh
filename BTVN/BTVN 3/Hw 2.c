#include <stdio.h>
int main(){
	float n;
	printf("Nhap so diem cua hoc sinh: ");
	scanf ("%f",&n);
	if (n<=10 && n>=9){
		printf("Hoc sinh xuat sac");
	}
	else if (n<9 && n>=8){
		printf("Hoc sinh gioi");
	}
	else if (n<8 && n>=6.5){
		printf("Hoc sinh kha");
	}
	else if (n<6.5 && n>=5){
		printf("Hoc sinh trung binh");
	}
	else {
		printf("Hoc sinh yeu");
	}
	return 0;
}
