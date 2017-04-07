//hangi gün
#include <stdio.h>

int main()
{
	//önce deðiþkeni tanýmlayalým
	char gun_no;
	
	//gun numarasýný alalým
	gun_oku:
		printf("Gun No\n"); scanf("%d",&gun_no);
	//hangi gün olduðunu bulalým
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
