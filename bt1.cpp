#include<stdio.h>
#include<conio.h>
int tamgiac(int n){
	n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	return n;
}
int main(){
	int n;
	printf("Nhap canh tam giac: ");
	scanf("%d",&n);
	printf(" ",tamgiac(n));
}
// sửa đôi chút 
