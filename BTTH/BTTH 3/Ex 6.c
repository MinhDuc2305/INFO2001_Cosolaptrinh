#include <stdio.h>
int main(){
	long long n;
	printf("Nhap vao gia tri n: ");
	scanf ("%lld",&n);
	int count1=0,count2=0,digit;
    while(n>0){
    	digit=n%10;
    	if (digit%2==0){
    		count1++;
		}
		else {
			count2++;
		}
	    n/=10;
	}	
	if (count1==count2){
		printf("YES");
	}
	else {
        printf("NO");
	}
	return 0;
}
