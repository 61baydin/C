#include <stdio.h>

int main(){
	int n,i,j,a[100],b[100];
	
	printf("Dizideki eleman sayisini giriniz:\n");
	scanf("%d",&n);
	
	printf("Dizi elemanlarini giriniz:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(i=n-1,j=0;i>=0;i--,j++)
		b[j]=a[i];
	
	printf("Ters Cevrilmis Dizi:\n");
	for(i=0;i<n;i++)
		printf("%d ",b[i]);
	
	return 0;
}
