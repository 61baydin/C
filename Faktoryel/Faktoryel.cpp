//fakt�ryel hesab�
#include <stdio.h>

int main()
{
	//de�i�kenleri tan�mlayal�m
	int n,s=0,f=1;
	//n de�erini okuyal�m
	printf("n: "); scanf("%d",&n);
	
	art: //etiket
	s++;
	if(s<=n)
		{
			f=f*s;
			goto art;
		}
	printf("%d faktoryel=%d",n,f);
	
	return 0;
	
}

