//hangi g�n
#include <stdio.h>

int main()
{
	//�nce de�i�keni tan�mlayal�m
	char gun_no;
	
	//gun numaras�n� alal�m
	gun_oku:
		printf("Gun No\n"); scanf("%d",&gun_no);
	//hangi g�n oldu�unu bulal�m
	switch(gun_no)
	{
		case 1:printf("pazartesi"); break;
		case 2:printf("sali"); break;
		case 3:printf("carsamba"); break;
		case 4:printf("persembe"); break;
		case 5:printf("cuma"); break;
		case 6:printf("cumartesi"); break;
		case 7:printf("pazar"); break;
		default: printf("Hatali secenek!!!");
	}	
	return 0;
}
