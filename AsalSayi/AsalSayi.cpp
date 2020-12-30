#include <stdio.h>
#include <math.h>

int main()
{
	int bas,bit,sayac1=0,sayac2=0;
	printf("Asal Sayi Baslangic ve bitis degeri gir:\n");
	scanf("%d %d",&bas,&bit);
	for(int i=bas;i<=bit;i++){
		sayac1=0;
		for(int j=2;j<sqrt(i);j++){
			if(i%j==0){
				sayac1++;
				break; 
			}
		}
		if(sayac1==0){
			printf("%d ",i);
			sayac2++;
		}
	}
	printf("\n");
	printf("%d - %d arasý Toplam %d adet asal sayi var.",bas,bit,sayac2);
}
