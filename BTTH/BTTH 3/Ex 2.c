#include <stdio.h>
int main(){
	int year;
	printf("Nhap nam:");
	scanf ("%d",&year);
	if(year<=0){
		printf("INVALID");
	}
	// Kiem tra nam nhuan
	else if (year%400==0 || (year%4==0 && year%100!=0) ){
		printf("YES");
	}
	else{
		printf("NO");
	}
	return 0;
}

