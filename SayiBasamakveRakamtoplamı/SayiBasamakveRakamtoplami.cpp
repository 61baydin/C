//Pozitif bir sayinin basamak deðerini ve rakamlari toplamini gösterme 

#include <stdio.h>

int main(){
	int n,N,basamak=0,sayici=0;
	basla:
		printf("Sayi Giriniz:");
		scanf("%d",&N);
		n=N;	
		if(N<=0)
			goto basla;
	
	while(n>0){
		basamak++;
		sayici+=n%10;
		n=n/10;
	}
	printf("\n %d sayisi %d basamaklidir.",N,basamak);
	printf("\n Rakamlari toplmai= %d dir.",sayici);
	
	return 0;
}
