#include <stdio.h>
#include <math.h>
int main(){
	basla:
	double sayi1,sayi2,sonuc=0.0;
	char islem='x';
	printf("<sayi1><islem><sayi2>: ");
	scanf("%lf %c %lf",&sayi1,&islem,&sayi2);
	
	switch(islem){
		case '+':
			sonuc=sayi1+sayi2;
			break;
		case '-':
			sonuc=sayi1-sayi2;
			break;
		case '*':
			sonuc=sayi1*sayi2;
			break;
		case '^':
			sonuc=pow(sayi1,sayi2);
			break;
		case '/':
			sonuc=sayi1/sayi2;
			break;
		default:
			sonuc=0.0;
			break;		
	}
	printf("sonuc: %lf\n",sonuc);
	goto basla;
	return 0;
}
