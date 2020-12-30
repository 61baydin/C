#include <stdio.h>

int dijitleriTersCevir(int n);

int main(){
	int number;
	printf("Sayi Giriniz: ");
	scanf("%d", &number);
	printf("%d\n", dijitleriTersCevir(number));
	
	return 0;
}

int dijitleriTersCevir(int n){
	int var1 = 0;
	int var2 = 0;
	while ( n > 0 ) {
		var2 = n % 10;
		var1 = var1*10 + var2;
		n /= 10;
	}
return var1;
}