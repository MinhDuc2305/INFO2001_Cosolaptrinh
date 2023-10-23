#include <stdio.h>
int main (){
    
	//input
	int A, B, rs, du;
    printf ("Nhap gia tri A ('luu y A,B >= -1018 và A,b <= 1018')");
	scanf ("%d %d", &A, &B);

    //process
	rs=A/B;
    du=A%B;
    
    //output
	printf ("%d %d",rs,du);	
	return 0;
}
