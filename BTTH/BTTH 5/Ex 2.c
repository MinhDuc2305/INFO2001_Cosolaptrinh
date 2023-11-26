#include <stdio.h>
#include <string.h>

struct DATE {
	int ngay;
	int thang;
	int nam;
};
struct Student {
    char maSo[10];
    char ten[50];
    struct DATE ngaysinh;
    char gioitinh[4];
    float grade;
};
void sapXepTheoTen(struct Student sv[], int n) {
    int i,j;
	for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (strcmp(sv[j].ten, sv[j + 1].ten) > 0) {

                struct Student temp = sv[j];
                sv[j] = sv[j + 1];
                sv[j + 1] = temp;
            }
        }
    }
}
int main(){
	struct Student sv[100];
	struct DATE ngaysinh[100];
	int i,n;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &n);
    printf("\n");
    for (i=0;i<n;i++){
    	printf("Nhap thong tin cua sinh vien %d\n",i+1);
		printf("Nhap ma so SV: ");
	    scanf("%s",&sv[i].maSo);
		printf("Nhap ho va ten SV: ");
		getchar();
		fgets (sv[i].ten,sizeof(sv[i].ten),stdin);
		printf("Nhap gioi tinh: ");
		scanf("%s",sv[i].gioitinh);
		printf("Ngay sinh: ");
		scanf("%d",&ngaysinh[i].ngay);
		printf("Thang sinh: ");
		scanf("%d",&ngaysinh[i].thang);
		printf("Nam sinh: ");
		scanf("%d",&ngaysinh[i].nam);
		printf("Nhap diem trung binh: ");
		scanf("%f",&sv[i].grade);
		printf("\n");
	}
	sapXepTheoTen(sv,n);
	for (i=0;i<n;i++){
		printf("Thong tin cua sinh vien %d\n",i+1);
	    printf("Ma so SV: %s\n",sv[i].maSo);
	    printf("Ho va ten SV: %s",sv[i].ten);
	    printf("Gioi tinh: %s\n",sv[i].gioitinh);
	   	printf("Ngay thang nam sinh: %d / %d / %d\n",ngaysinh[i].ngay,ngaysinh[i].thang,ngaysinh[i].nam);
	    printf("Diem: %.2f\n",sv[i].grade);
	   	printf("\n");
    }
    char luaChon;
    printf("Ban co muon tim sinh vien nao khong? [Y/N]: ");
    scanf(" %c", &luaChon);
	if (luaChon== 'y'|| luaChon=='Y'){
		char findstid[20];
 	  	printf("\nNhap ma sinh vien can tim: ");
	    scanf("%s", &findstid);
	    int timThay = 0;
	    for (i = 0; i < n; i++) {
	        if (strcmp(sv[i].maSo, findstid) == 0) {
	            printf("Thong tin cua sinh vien can tim:\n");
		        printf("Ma so SV: %s\n",sv[i].maSo);
		        printf("Ho va ten SV: %s",sv[i].ten);
		        printf("Gioi tinh: %s\n",sv[i].gioitinh);
		    	printf("Ngay thang nam sinh: %d / %d / %d\n",ngaysinh[i].ngay,ngaysinh[i].thang,ngaysinh[i].nam);
		        printf("Diem: %.2f\n",sv[i].grade);
				printf("\nTim kiem thanh cong!\n");
				printf("\n");
		        timThay = 1;
	            break;
	        }
	    }
	    if (!timThay) {
	        printf("\nKhong tim thay sinh vien co ma %s.\n", findstid);
	    } 
}
	return 0;
}
