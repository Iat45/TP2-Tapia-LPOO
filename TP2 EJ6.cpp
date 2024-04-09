#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char cadena1[50];
	char cadena2[50];
	
	int x,y,cont=0;
	int longitud1,longitud2;
	
	printf("Ingrese una palabra:");
	scanf("%s",&cadena1);
	
	printf("Ingrese otra palabra:");
	scanf("%s",&cadena2);
	
	longitud1=strlen(cadena1);
	longitud2=strlen(cadena2);
	
	if(longitud1!=longitud2)
	{
		printf("Las palabras ingresadas no son anagramas");
	}
	else
	{
		for(x=0;x<longitud1;x++)
		{
			for(y=0;y<longitud2;y++)
			{
				if(cadena1[x]==cadena2[y])
				{
					cont++;
					cadena2[y]=' ';
					break;
				}
			}
		}
	
		if(cont==longitud1)
		{
			printf("Su palabra es un anagrama");
		}
		else
		{
			printf("Su palabra no es un anagrama");
		}
	}
	return 0;
}
