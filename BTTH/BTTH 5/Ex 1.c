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
    printf("Ban co muon cap nhat sinh vien nao khong? [Y/N]: ");
    scanf(" %c", &luaChon);
	if (luaChon== 'y'|| luaChon=='Y'){    
		char findstid[20];
        printf("\nNhap ma sinh vien can cap nhat: ");
        scanf("%s", &findstid);
        int timThay = 0;
        for (i = 0; i < n; i++) {
            if (strcmp(sv[i].maSo, findstid) == 0) {
                printf("Thong tin cua sinh vien can cap nhat\n");
    	        printf("Ma so SV: %s\n",sv[i].maSo);
    	        printf("Ho va ten SV: %s",sv[i].ten);
    	        printf("Gioi tinh: %s\n",sv[i].gioitinh);
    	    	printf("Ngay thang nam sinh: %d / %d / %d\n",ngaysinh[i].ngay,ngaysinh[i].thang,ngaysinh[i].nam);
    	        printf("Diem: %.2f\n",sv[i].grade);
    			printf("\n");
    			printf("Thong tin moi cua sinh vien\n");
    			printf("Ten moi: ");
    			getchar();
    			fgets (sv[i].ten,sizeof(sv[i].ten),stdin);
    			printf("Diem trung binh moi: ");
    			scanf("%f",&sv[i].grade);
    			printf("\nCap nhat thanh cong!\n");
    	        timThay = 1;
                break;
            }
        }
        if (!timThay) {
            printf("\nKhong tim thay sinh vien co ma %s.\n", findstid);
        }  
        printf("\nDanh sach sinh vien sau khi cap nhat:\n");
 	   for (i=0;i<n;i++){
			printf("Thong tin cua sinh vien %d\n",i+1);
		    printf("Ma so SV: %s\n",sv[i].maSo);
		    printf("Ho va ten SV: %s",sv[i].ten);
		    printf("Gioi tinh: %s\n",sv[i].gioitinh);
		   	printf("Ngay thang nam sinh: %d / %d / %d\n",ngaysinh[i].ngay,ngaysinh[i].thang,ngaysinh[i].nam);
		    printf("Diem: %.2f\n",sv[i].grade);
		   	printf("\n");
		   }
}
	return 0;

}
