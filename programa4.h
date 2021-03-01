#include<iostream>
#include<cstring>
using namespace std;
int main4(){
	char cadena[100], copia[100];
	
	cout<<"Ingrese palabra: "<<endl;
	cin>>cadena;
	
	for( int i=(strlen(cadena)-1);i>=0;i--){
		copia[strlen(cadena)-1-i]=cadena[i];
		
	}
	copia[strlen(cadena)]='\0';
	
	if(strcmp(cadena,copia)==0){
		cout<<"Es palindroma";
	}else{
		cout<<"La palabra no es palindroma";
	}
	 
	return 0;
}
