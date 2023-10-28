#include <stdio.h>
int main(){
	int month,year;
	printf ("Hay nhap thang, nam: ");
	scanf("%d %d",&month,&year);
	// kiem tra thang va nam xem co hop le khong
	if (month<=0 && year <=0 && month>=13){
		printf ("INVALID");
	}
	// xem so ngay trong thang
	else {
		switch(month){
			case 1:
				printf("31");
				break;
			case 2:
				if(year%4==0 && year%100!=0){
					printf ("29");
				}
				else {
					printf("28");
				}
				break;
			case 3:
				printf ("31");
				break;
			case 4:
				printf ("30");
				break;
			case 5:
				printf ("31");
				break;
			case 6:
				printf ("30");
				break;
			case 7:
				printf ("31");
				break;
			case 8:
				printf ("31");
				break;
			case 9:
				printf ("30");
				break;
			case 10:
				printf ("31");
				break;
			case 11:
				printf ("30");
				break;
			case 12:
				printf ("31");
				break;
	        default:
	        	printf("INVALID");
	        	break;		
		}
	}
}
