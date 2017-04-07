#include <stdio.h>
int main()
{
	//deðiþkenleri tanýmlayalým
	int n,s=0;
	
	//n deðerini okuyalým
	printf("n: ");scanf("%d",&n);
	
	art: //etiket
	
	//sayac 1 arttýralým
	s=s+1;
	
	//sayac deðerini yazdýralým
	printf("%d\n",s);
	//eðer sayac n deðerinden
	//küçükse art etiketine git
	if(s<n)
		goto art; 
		//goto komutu bellekte atlama yaptýðý için
		//önerilmez.
	
	return 0;
}
