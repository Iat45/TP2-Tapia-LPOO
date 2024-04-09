#include <stdio.h>
#include <conio.h>
#include <string.h>


int main()
{
	
	char cadena[50];
	printf("Ingrese una cadena de caracteres: ");
	scanf("%s", &cadena);
	int x,longitud,cont=0;
	longitud = strlen(cadena);
	for(x=0;x<longitud;x++)
	{
		if(cadena[x]==cadena[longitud-x-1])
		{
			cont++;
		}
		
	}
	if(cont==longitud)
	{
		printf("Su palabra es palindroma");
	}
	else
	{
		printf("Su palabra no es palindroma");
	}
}
