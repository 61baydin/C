#include <stdio.h>

//global de�iskenler
int s1=5,s2=10,toplam=0;

int hesapla()
{
	toplam=s1+s2; //global de�iskenler
	printf("\nfonksiyon toplam=%d",toplam);
}

int main()
{
	toplam=s1+s2; //global de�iskenler
	printf("toplam=%d",toplam);
	
	//hesapla fonksiyonunu �al��t�ral�m
	hesapla();
	
	return 0;
}
