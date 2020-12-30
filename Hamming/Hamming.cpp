#include <stdio.h>

int isHamming(int sayi){
	if(sayi==1)
        return 1;
    else if(sayi % 2== 0)
        return isHamming(sayi/2);
    else if (sayi % 3== 0)
        return isHamming(sayi/3);
    else if (sayi % 5 == 0)
        return isHamming(sayi/5);
    else
        return 0;
}
int hamming(int sayi){
		if(sayi==1)
			return 1;
		hamming(sayi-1);
		if(isHamming(sayi))
			printf("%d ",sayi);
}
int main(){
	
	int sayi;
	printf("Hamming Sayisi Sinirini Giriniz: ");
	scanf("%d",&sayi);
	hamming(sayi);	

	
}
