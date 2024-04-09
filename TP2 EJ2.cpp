#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int longitud,x;
	int cont=0;
	char cadena[50];
	
	printf("Ingrese una cadena de caracteres:");
	scanf("%s", &cadena);
	
	longitud=strlen(cadena);
	
	for(x=0;x<longitud;x++)
	{
		if(cadena[x]=='a' || cadena[x]=='A' || cadena[x]=='e' || cadena[x]=='E' || cadena[x]=='i' || cadena[x]=='I' || cadena[x]=='o' || cadena[x]=='O' || cadena[x]=='u' || cadena[x]=='U')
		{
			cont++;
		}
	}
	
	printf("La cantidad de cantidad de vocales es %d", cont);
	
	 
	
}
