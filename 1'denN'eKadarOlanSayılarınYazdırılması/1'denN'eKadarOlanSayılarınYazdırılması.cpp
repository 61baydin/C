#include <stdio.h>
int main()
{
	//de�i�kenleri tan�mlayal�m
	int n,s=0;
	
	//n de�erini okuyal�m
	printf("n: ");scanf("%d",&n);
	
	art: //etiket
	
	//sayac 1 artt�ral�m
	s=s+1;
	
	//sayac de�erini yazd�ral�m
	printf("%d\n",s);
	//e�er sayac n de�erinden
	//k���kse art etiketine git
	if(s<n)
		goto art; 
		//goto komutu bellekte atlama yapt��� i�in
		//�nerilmez.
	
	return 0;
}
