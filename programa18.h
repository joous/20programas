#include<stdio.h>
#include<conio.h>

//El programa calcula el promedio de 3 numeros

main18(){
	int numero, resultado1=0;
	float total;
	for (int i=0;i<3;i++){
		printf("Ingrese el dato %d: ",i+1);
		scanf("%d",&numero);
		resultado1=resultado1+numero;
	}
	total=resultado1/3;
	printf("\nEl promedio es: %f",total);
	getch();
}
