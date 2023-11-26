#include <stdio.h>
#include <string.h>

struct Employee {
    char maSo[10];
    char ten[50];
    char chucvu[20];
    int luong;
};
void sapXepTheoTen(struct Employee nv[], int n) {
    int i,j;
	for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (strcmp(nv[j].ten, nv[j + 1].ten) > 0) {
                struct Employee temp = nv[j];
                nv[j] = nv[j + 1];
                nv[j + 1] = temp;
            }
        }
    }
}
int xoaSinhVien(struct Employee nv[], int n, int viTriXoa) {
    int i;
	if (viTriXoa >= 0 && viTriXoa < n) {
        for (i = viTriXoa; i < n - 1; i++) {
            nv[i] = nv[i + 1];
        }
        return n - 1;
    } else {
        printf("Vi tri xoa khong hop le.\n");
        return n;
    }
}
int main(){
	struct Employee nv[100];
	int i,n;
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    printf("\n");
    for (i=0;i<n;i++){
    	printf("Nhap thong tin cua nhan vien %d\n",i+1);
		printf("Nhap ma so nhan vien: ");
	    scanf("%s",&nv[i].maSo);
		printf("Nhap ho va ten nhan vien: ");
		getchar();
		fgets (nv[i].ten,sizeof(nv[i].ten),stdin);
		printf("Nhap chuc vu: ");
		scanf("%s",&nv[i].chucvu);
		printf("Nhap muc luong: ");
		scanf("%d",&nv[i].luong);
		printf("\n");
	}
	sapXepTheoTen(nv,n);
	for (i=0;i<n;i++){
		printf("Thong tin cua nhan vien %d\n",i+1);
	    printf("Ma so nhan vien: %s\n",nv[i].maSo);
	    printf("Ho va ten nhan vien: %s",nv[i].ten);
	    printf("Chuc vu: %s\n",nv[i].chucvu);
	    printf("Muc luong: %d\n",nv[i].luong);
	   	printf("\n");
    }
	char luaChon;
    printf("Ban co muon tim nhan vien nao khong? [Y/N]: ");
    scanf(" %c", &luaChon);
	if (luaChon== 'y'|| luaChon=='Y'){    
		char findstid[20];
	    printf("\nNhap ma nhan vien can tim: ");
	    scanf("%s", &findstid);
	    int timThay = 0;
	    for (i = 0; i < n; i++) {
	        if (strcmp(nv[i].maSo, findstid) == 0) {
	            printf("Thong tin cua nhan vien can tim:\n");
		        printf("Ma so nhan vien: %s\n",nv[i].maSo);
		        printf("Ho va ten nhan vien: %s",nv[i].ten);
		        printf("Chuc vu: %s\n",nv[i].chucvu);
		        printf("Muc luong: %d\n",nv[i].luong);
				printf("\n");
		        timThay = 1;
	            break;
	        }
	    }
	    if (!timThay) {
	        printf("\nKhong tim thay sinh vien co ma %s.\n", findstid);
	    }
}
	printf("Ban co them nhan vien nao khong? [Y/N]: ");
	scanf(" %c", &luaChon);
	int add, j;
	if (luaChon == 'y' || luaChon == 'Y') {
	    printf("Nhap so nhan vien ban muon them: ");
	    scanf("%d", &add);
	    if (add < 100) {
	        for (j = n; j < n + add; j++) {
	            printf("Nhap thong tin cua nhan vien moi(nhan vien %d)\n",j+1);
	            printf("Nhap ma so nhan vien: ");
	            scanf("%s", &nv[j].maSo);
	            printf("Nhap ho va ten nhan vien: ");
	            getchar();
	            fgets (nv[j].ten,sizeof(nv[j].ten),stdin);
	            printf("Nhap chuc vu: ");
	            scanf("%s", &nv[j].chucvu);
	            printf("Nhap muc luong: ");
	            scanf("%d", &nv[j].luong);
	            printf("\n");
		        printf("\nThem thanh cong!\n");
	        }
		        n = n + add;
	    } else {
	        printf("Danh sach da day, khong the them nhan vien moi.\n");
		}
	    printf("\nDanh sach cua nhan vien: \n");
	    for (i = 0; i < n; i++) {
	        printf("Thong tin cua nhan vien %d\n", i + 1);
	        printf("Ma so nhan vien: %s\n", nv[i].maSo);
	        printf("Ho va ten nhan vien: %s", nv[i].ten);
	        printf("Chuc vu: %s\n", nv[i].chucvu);
	        printf("Muc luong: %d\n", nv[i].luong);
	        printf("\n");
	    }
	}
	int ViTriXoa;
	printf("Ban co xoa nhan vien nao khong? [Y/N]: ");
    scanf(" %c", &luaChon);
	if (luaChon== 'y'|| luaChon=='Y'){
  		printf("Nhap STT nhan vien ban muon xoa: ");
  		scanf ("%d",&ViTriXoa);
		ViTriXoa--;
		n=xoaSinhVien(nv,n,ViTriXoa);
		printf("\nXoa thanh cong!\n");
		printf("\nThong tin cua nhan vien sau khi xoa: \n");
		for (i=0;i<n;i++){
			printf("Thong tin cua nhan vien %d\n",i+1);
		    printf("Ma so nhan vien: %s\n",nv[i].maSo);
		    printf("Ho va ten nhan vien: %s",nv[i].ten);
		    printf("Chuc vu: %s\n",nv[i].chucvu);
		    printf("Muc luong: %d\n",nv[i].luong);
		   	printf("\n");
        }
	}
 	
	return 0;
}
