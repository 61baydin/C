#include <stdio.h>


int usAl(int taban,int us){
	if(us==0)
		return 1;
	else
		return taban*usAl(taban,us-1);
}
int main(){
	
	int taban,us;
	printf("Ust alinacak taban ve ustunu giriniz: ");
	scanf("%d %d",&taban,&us);
	
	int sonuc=usAl(taban,us);
	printf("\nSonuc: %d",sonuc);
	return 0;
}
