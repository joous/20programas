#include<stdio.h>
#include<conio.h>

//El programa determina si con la calificacion ingresada el alumno aprueba o reprueba

main19(){
	float calif;
	printf("Ingrese la calificacion: ");
	scanf("%f", &calif);
	if(calif>=60){
		printf("Es aprobado");
	}else{
		printf("Es reprobado");
	}
	getch();
}
