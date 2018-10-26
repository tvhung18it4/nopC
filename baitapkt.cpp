#include<stdio.h>
#include<conio.h>
#include<string.h>
void nhapmang(int a[100], int n){
for(int i=0;i<n;i++){
	printf("a[%d]=",i);
	scanf("%d",&a[i]);
}
}
void inmang(int a[100], int n){
	for(int i=0;i<n;i++){
		printf("\na[%d]=%d\n",i,a[i]);
	}
}
int tonggt(int a[100],int n){
long i,j, gt = 1;	
int tong = 0;
for(i=1;i<n;i++){
	for(j=1;j<a[i];j++){
gt = a[i]*j;
tong = tong+gt;
	}
}
return gt;
}
void dem(char chuoi[50]){
	int len;
len = strlen(chuoi);
	printf("\nSo ki tu trong chuoi la: %d ",len);
}
int main(){
	int a[100],n;
	char chuoi[50];
	printf("Nhap chuoi: ");
    gets(chuoi);
	printf("Nhap n: ");
	scanf("%d",&n);
	nhapmang(a,n);
	inmang(a,n);
	printf("tong la: %d ",tonggt(a,n));
	dem(chuoi);
}
