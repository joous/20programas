#include <iostream>
using namespace std;

string a (int arabic) //arabico a romano
{
	string roman=""; //resultado
	
	for(int i=1; i<=3 && arabic>0; i++, arabic/=10)
	{
		char ten,five,one;
		switch(i)
		{
			case 1: ten='X'; five='V'; one='I'; break;
			case 2: ten='C'; five='L'; one='X'; break;
			case 3: ten='M'; five='D'; one='C'; break;
		}
		int cipher=arabic%10;
		if(cipher<=3)
		{
			for(int j=0; j<cipher; j++)
				roman=one+roman;
			continue;
		}
		if(cipher==9)
		{
			roman=ten+roman;
			roman=one+roman;
			continue;
		}
		for(int j=0; j<cipher-5; j++) //6-8
			roman=one+roman;
		roman=five+roman;
		if(cipher==4)
			roman=one+roman;
	}
	
	for(int i=arabic; i>0; i--)
		roman="M"+roman;
	return roman;
}


int main5()
{
    int i;
	cout<< "Ingrese un numero entre 1 y 1000"<<endl;
	cin>> i;
		cout<<i<<" En romano es: \t"<<a(i);
	return 0;
}
