#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char cadena2[50];
	char cadena3[50];
	char cadena4[50];
	char cadena5[50];
	
	char cadena_igual[50];
	
	printf("Ingrese la primera palabra:");
	scanf("%s",&cadena1);
	
	printf("Ingrese la segunda palabra:");
	scanf("%s",&cadena2);
	
	printf("Ingrese la tercera palabra:");
	scanf("%s",&cadena3);
	
	printf("Ingrese la cuarta palabra:");
	scanf("%s",&cadena4);
	
	printf("Ingrese la quinta palabra:");
	scanf("%s",&cadena5);
	
	int longitud1;
	int x,aux=0,longitud;
	
	longitud1=strlen(cadena1);
	
	for(x=0;x<longitud1;x++)
	{
		if(cadena1[x]==cadena2[x] && cadena1[x]==cadena3[x] && cadena1[x]==cadena4[x] && cadena1[x]==cadena5[x])
		{
			cadena_igual[x]=cadena1[x];
		}
	}
	
	longitud=strlen(cadena_igual);
	
	if(longitud<=0)
	{
		printf("\nLos caracteres iguales son: %s",cadena_igual);		
	}
	else
	{
		printf("\nNo hay caracteres iguales");
	}
}
