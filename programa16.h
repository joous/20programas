#include <iostream>
#include <math.h>
using namespace std; 

int main16(){
 int co,ca;
 float h;
 
 cout<<"Ingrese el cateto opuesto:";
 cin>>co;
 
 cout<<"Ingrese el cateto adyacente:";
 cin>>ca;
 
 h=sqrt (pow(co,2)+pow(ca,2));
 
 cout<<"La hipotenusa es: "<<h;
 
 cin.get();
    return 0;
}
