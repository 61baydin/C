#include <stdio.h>

int hesapla()
{
		int s1=2,s2=2,toplam=0;
		toplam=s1+s2; //main() fonksiyonu local de�i�kenler
		printf("\nfonksiyon toplam=%d",toplam);
}

int main()
{
	//local de�i�kenler
	int s1=5,s2=10,toplam=0;
	toplam=s1+s2;
	printf("toplam=%d",toplam);
	
	//hesapla fonksiyonu �al��t�ral�m
	hesapla();
	
	return 0;
}

