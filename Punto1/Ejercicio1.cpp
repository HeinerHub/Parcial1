/*
* Programa: Ejercicio1
* Fecha: 11/09/2018
* Autor: Heiner Colorado Castañeda
*/


#include<stdio.h>
#include<conio.h>


using namespace std; 


int main()
{
	char n = 's'; 
	float preguntas=0, preguntasA=0, porcentaje=0;
	
	do
	{
		printf("Ingrese el numero de preguntas: ");
		scanf("%f", &preguntas); 
		printf("Ingrese el numero de preguntas acertadas: ");
		scanf("%f", &preguntasA); 
		
		porcentaje = (preguntasA/preguntas)*100; 
		
		if(porcentaje >= 80)
		{
			printf("Porcentaje de preguntas acertadas: %.1f NIVEL MAXIMO.\n", porcentaje); 
		}
		else if(porcentaje >= 65 && porcentaje < 80)
		{
			printf("Porcentaje de preguntas acertadas: %.1f NIVEL MEDIO.\n", porcentaje); 
		}
		else if(porcentaje >= 40 && porcentaje < 65)
		{
			printf("Porcentaje de preguntas acertadas: %.1f NIVEL REGULAR.\n", porcentaje); 
		}
		else{
			printf("Porcentaje de preguntas acertadas: %.1f FUERA DE NIVEL.\n", porcentaje); 
		}
		
		printf("Ingresar mas informacion? (s/1): ");
		scanf("%s", &n); 
	}while(n=='s'); 
	
	return 0; 
}
