#include <stdio.h>

//global değiskenler
int s1=5,s2=10,toplam=0;

int hesapla()
{
	toplam=s1+s2; //global değiskenler
	printf("\nfonksiyon toplam=%d",toplam);
}

int main()
{
	toplam=s1+s2; //global değiskenler
	printf("toplam=%d",toplam);
	
	//hesapla fonksiyonunu çalıştıralım
	hesapla();
	
	return 0;
}
