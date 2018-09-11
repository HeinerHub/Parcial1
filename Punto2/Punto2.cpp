/*
programa: Ejercicio2
fecha: 11/09/18
autor: sletsen duque vargas
*/

#include <conio.h>
#include <stdio.h>

int main()
{
	int n, pares, impares;
	
	printf( "\n   Introduzca un n%cmero entero (0=Fin): ",150 );
	scanf( "%d", &n );
	
	pares = 0;
	impares = 0;
	
	while ( n != 0 )
	{
		if ( n % 2 == 0 )
			pares++;
		else
			impares++;
		
		printf( "\n   Introduzca un n%cmero entero (0=Fin): ",150 );
		scanf( "%d", &n );
	}
	
	printf( "\n   Ha introducido %d n%cmero(s) par(es) y %d impar(es).", pares, 150, impares );
	
	getch(); 
	
	return 0;
}
