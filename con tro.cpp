#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void NhapMang(int *a, int n){
	for(int i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",a+i);
	}
}
void XuatMang(int *a,int n){
	printf("Mang da nhap la: ");
	for(int i=0;i<n;i++){
		printf("\na[%d] = %d",i,*(a+i));
	}
}
void Min(int *a,int n,int min){
	for(int i=0;i<n;i++){
		if(min>*(a+i)){
			min = *(a+i);
		}
	}
	printf("\nSo nho nhat trong mang la: %d",min);
}
void Coppy(int *a,int *b,int n){
	for(int i=0;i<n;i++){
		*(a+i) = *(b+i);
		printf("\na[%d] = %d",i,*(b+i));
	}
}
void SoAm(int *a,int n){
	for(int i=0;i<n;i++){
		if(*(a+i)<0){
			printf("\nSo am dau tien la: %d ",*(a+i));
	break;
	}
		if(*(a+i)>0){
		printf("\n -1");
		break;
	}
}
}
int Dem(int *a,int n){
	int dem = 0;
	for(int i = 0; i<n; i++){
		if(*(a+i)<=-10){
			dem = dem + 1;
		}
	}
	return dem;
}
int dem(int *a,int n){
	int dem = 0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
			dem = dem +1;
		}
	}
	return dem;
}
int Tb(int *a,int n){
	double S=0;
	for(int i=0;i<n;i++){
		if(*(a+i)%2==0){
			S = (S+*(a+i));
		}
	}
	return S;
}
int main(){
	int n,min;
	printf("Nhap n: ");
	scanf("%d",&n);
	int *p = (int *)malloc(n*sizeof(int));
	min = *p;
	int *pp = (int *)malloc(n*sizeof(int));
	NhapMang(p,n);
	XuatMang(p,n);
	Min(p,n,min);
	SoAm(p,n);
	printf("\nSo am nho hon -10 la: %d ",(Dem(p,n)));
	printf("\nTrung binh so chan la: %lf ",Tb(p,n)/dem(p,n));
}
