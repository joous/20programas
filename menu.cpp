#include<iostream>
#include "programa1.h"
#include "programa2.h"
#include "programa3.h"
#include "programa4.h"
#include "programa5.h"
#include "programa6.h"
#include "programa7.h"
#include "programa8.h"
#include "programa9.h"
#include "programa11.h"
#include "programa12.h"
#include "programa13.h"
#include "programa14.h"
#include "programa15.h"
#include "programa16.h"
#include "programa17.h"
#include "programa18.h"
#include "programa19.h"
#include "programa20.h"
using namespace std;
int main(){
	int a;
	system("cls");
	do {
	cout<<"Ingrese el numero de programa que desee ver"<<endl;
	cout<<"1) Suma, Resta, Multiplicacion y Division de dos numeros"<<endl;
	cout<<"2) Determinar si un numero es par o impar"<<endl;
	cout<<"3) Convertir de kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
	cout<<"4) Determinar si una palabra o un numero es palindromo."<<endl;
	cout<<"5) Conversion de numeros arabigos a romanos (minimo 1,000)"<<endl;
	cout<<"6) Conversion de numeros enteros a letras"<<endl;
	cout<<"7) Conversion de numeros enteros con decimal a letras"<<endl;
	cout<<"8) Una tabla de multiplicar"<<endl;
	cout<<"9) Todas las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"11) Conversion de numeros decimales a binario"<<endl;
	cout<<"12) Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"13) Crear Figuras Geometricas Basicas."<<endl;
	cout<<"14) Mover un punto en toda la pantalla"<<endl;
	cout<<"15) Simulacion de un Cajero (Automata)"<<endl;
	cout<<"16) Calcular la hipotenusa"<<endl;
	cout<<"17) Area de un rectangulo"<<endl;
	cout<<"18) Calcular el promedio de 3 notas"<<endl;
	cout<<"19) Determinar si un alumno aprueba o reprueba"<<endl;
	cout<<"20) Area de un circulo"<<endl;
		
	
	cin>>a;
	system("cls");
	
	switch(a) //donde opción es la variable a comparar
{
    case 1: main1();
    break;
    
    case 2: main2();
    break;
    
    case 3: main3();
    break;
    
    case 4: main4();
    break;
    
    case 5: main5();
    break;
    
    case 6: main6();
    break;
    
    case 7: main7();
    break;
    
    case 8: main8();
    break;
    
    case 9: main9();
    break;
    
    case 11: main11();
    break;
    
    case 12: main12();
    break;
    
    case 13: main13();
    break;
    
    case 14: main14();
    break;
    
    case 15: main15();
    break;
    
    case 16: main16();
    break;
    
    case 17: main17();
    break;
    
    case 18: main18();
    break;
    
    case 19: main19();
    break;
    
    case 20: main20();
    break;

    default: return 0;
}
	system("pause");
}while(a!=0);
	return 0;
}
