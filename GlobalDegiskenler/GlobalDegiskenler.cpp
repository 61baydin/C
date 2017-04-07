#include <stdio.h>

//global deðiskenler
int s1=5,s2=10,toplam=0;

int hesapla()
{
	toplam=s1+s2; //global deðiskenler
	printf("\nfonksiyon toplam=%d",toplam);
}

int main()
{
	toplam=s1+s2; //global deðiskenler
	printf("toplam=%d",toplam);
	
	//hesapla fonksiyonunu çalýþtýralým
	hesapla();
	
	return 0;
}
