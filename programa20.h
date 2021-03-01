#include <stdio.h>
#include <conio.h>
//El programa calcula el area de un circulo
main20()
{
	float radio,area;
	printf("\nEste programa calculara el area de un circulo\n");
	printf("\nPor favor, ingrese el valor del radio\n");
	scanf("%f",&radio);
	area=3.1416*(radio*radio);
	printf("\n El area del circulo es: %.2f\n",area);
	getch();
	
	
}
