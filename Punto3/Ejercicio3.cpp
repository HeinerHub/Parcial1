/*
programa: Ejercicio3
fecha: 11/09/18
autor: Heiner Colorado Castañeda
*/


#include <iostream>
#include<stdio.h>
#include<string.h>

int main()
{
	char nombre1[15];
	char nombre2[15];
	char nombreLargo[15];
	
	printf("Ingrese primer nombre:");
	gets(nombre1);
	
	printf("Ingrese segundo nombre:");
	gets(nombre2);
	
	if (strlen(nombre1)>strlen(nombre2))
	{
		strcpy(nombreLargo,nombre1);
	}
	else
	{
		strcpy(nombreLargo,nombre2);
	}
	
	printf("El nombre %s tiene mas caracteres",nombreLargo);
	getchar();
	
	return 0;
}

