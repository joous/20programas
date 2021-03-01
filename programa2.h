#include<iostream>
using namespace std;

int main2(){
	int numero;
	cout<<"El programa determinara si el numero que ingrese es par o impar"<<endl;
	cout<<"Ingrese un numero: ";
	cin>>numero;
	
	if(numero==0){
		cout<<"El numero es cero";
	}
	else if(numero%2==0){
		cout<<"El numero es par";
	}
	else{
		cout<<"El numero es impar";
	}
	return 0;
}
