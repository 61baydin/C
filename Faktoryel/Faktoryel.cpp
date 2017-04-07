//faktöryel hesabý
#include <stdio.h>

int main()
{
	//deðiþkenleri tanýmlayalým
	int n,s=0,f=1;
	//n deðerini okuyalým
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

