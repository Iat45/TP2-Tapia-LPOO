#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char cadena[50];
	char letra;
	char reemp;
	
	printf("Ingrese una palabra:");
	scanf("%s",&cadena);
	
	printf("\nIngrese la letra que desea cambiar:");
	scanf(" %c",&letra);
	
	printf("\nIngrese la letra por la cual desea remplazarla:");
	scanf(" %c",&reemp);
	
	int longitud, i;
	
	longitud=strlen(cadena);
	
	for(i=0;i<longitud;i++)
	{
		if(cadena[i]==letra)
		{
			cadena[i]=reemp;
		}
	}
	
	
	printf("\n%s",cadena);
	
}
