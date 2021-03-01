#include<iostream>
using namespace std;
int main3(void){
	
	int opcion;
	double kilometros, millas, metros, pulgadas, libras, kilos;
	
	cout<<"Ingrese una opcion: "<<endl;
	cout<<"1. Kilometros a millas "<<endl;
	cout<<"2. Metros a pulgadas"<<endl;
	cout<<"3. Libras a kilos"<<endl;
	cout<<"-----------------"<<endl;
	cout<<"4. Millas a kilometros"<<endl;
	cout<<"5. Pulgadas a metros"<<endl;
	cout<<"6. kilos a libras"<<endl;
	cin>>opcion;
	
	switch(opcion){
		
		case 1:
			cout<<"*****Kilometros a millas******"<<endl;
			cout<<"Ingrese la cantidad de kilometros a convertir"<<endl;
			cin>>kilometros;
			millas=kilometros*0.62;
			cout<<kilometros<<" kilometros equivalen a "<<millas<<" millas."<<endl;
			break;
		
		case 2:
			cout<<"*****Metros a pulgadas******"<<endl;
				cout<<"Ingrese la cantidad de metros a convertir"<<endl;
			cin>>metros;
			pulgadas=metros*39.37;
			cout<<metros<<" metros equivalen a "<<pulgadas<<" pulgadas."<<endl;
			break;
		
		case 3:
			cout<<"*****Libras a kilos******"<<endl;
			cout<<"Ingrese la cantidad de libras a convertir"<<endl;
			cin>>libras;
			kilos=libras*0.45;
			cout<<libras<<" libras equivalen a "<<kilos<<" kilos."<<endl;
			break;
			
		case 4:
			cout<<"*****Millas a kilometros******"<<endl;
			cout<<"Ingrese la cantidad de millas a convertir"<<endl;
			cin>>millas;
			kilometros=millas*1.60;
			cout<<millas<<" millas equivalen a "<<kilometros<<" kilometros."<<endl;
			break;
			
		case 5:
			cout<<"*****Pulgadas a metros******"<<endl;
			cout<<"Ingrese la cantidad de pulgadas a convertir"<<endl;
			cin>>pulgadas;
			metros=pulgadas*0.025;
			cout<<pulgadas<<" pulgadas equivalen a "<<metros<<" metros."<<endl;
			break;
			
		case 6:
			cout<<"*****Kilos a libras******"<<endl;
			cout<<"Ingrese la cantidad de kilos a convertir"<<endl;
			cin>>kilos;
			libras=kilos*2.20;
			cout<<kilos<<" kilos equivalen a "<<libras<<" libras."<<endl;
			break;
			
			
		
			default:
			cout<<"La opcion ingresada no es correcta."<<endl;
			break;	
	}
	
}
