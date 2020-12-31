#include <stdio.h>
#include <math.h>

int main(){
	float x1,x2;
	int a,b,c,delta;
	// Ax^2 + Bx + C = 0
	printf("\n A degerini giriniz: ");scanf("%d",&a);
	printf("\n B degerini giriniz: ");scanf("%d",&b);
	printf("\n C degerini giriniz: ");scanf("%d",&c);
	
	delta= pow(b,2)-4*a*c;
	x1= (-b+sqrt(delta))/(2*a);
	x2= (-b-sqrt(delta))/(2*a);
	
	if(delta<0){
		printf("\nDenklemin Koku Yoktur.");
	}else if(delta==0){
		printf("\nDenklemin kokleri esittir.\n");
		printf("x1=x2= %.2f",x1);
	}else{
		printf("\nDenklemin kokleri:");
		printf("\nx1=%.2f",x1);
		printf("\nx2=%.2f",x2);
	}
	return 0;
}
