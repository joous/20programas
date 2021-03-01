#include <iostream>
 
using namespace std;
 
int x;
 
int main13(){
 
 
    cin>>x;  //'x' siendo el ancho del triangulo ( no el largo de la base ).
 
    //este ciclo imprime la parte ascendente del triangulo ( hasta la mitad ).
 
    for( int i=1 ; i<=x ; i++ ){
 
        for( int j=1 ; j<=i ; j++ ){
 
            cout<<"*";
 
        }
        cout<<"\n";
    }
 
    //Y ahora otro ciclo doble para la parte descendente.
    //Inicio la variable en x-1 pues ya esta impresa esa linea en el anterior bucle.
 
    for( int i=(x-1) ; i > 0 ; i-- ){
 
        for( int j=1 ; j<=i ; j++ ){
 
            cout<<"*";
 
        }
        cout<<"\n";
    }
 
    /*
    Algunos revisadores detectan el salto de linea como caracteres,
    si te da problemas tienes que regular el segundo ciclo ( el de afuera )
    con una condicion:

    if( i > 1 )
        cout<<"\n";
    */
 
    return 0;
}
