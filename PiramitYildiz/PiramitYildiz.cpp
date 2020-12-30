#include <stdio.h>

int main(){
	int rows;
	printf("Satir sayisini giriniz: \n");
	scanf("%d",&rows);
	
	for (int i=1;i<=rows;i++){
		for(int j=rows;j>i;j--)
			printf(" ");
		for(int k=1;k<=i*2-1;k++)
			printf("*");
		printf("\n");
	}
	return 0;
}
