#include <stdio.h>

int mukemmelSayi(int value);

int main(){
	for ( int j = 2; j <= 1000; j++ ){
		if ( mukemmelSayi( j ) )
			printf( "%d\n", j );
	}
	return 0;
}

int mukemmelSayi( int value ){
	int var = 1;
	for ( int  i = 2; i <= value / 2; i++ ){
		if ( value % i == 0 )
			var += i;
	}

	if ( var == value )
		return 1; 
	else
		return 0;
}