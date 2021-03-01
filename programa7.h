
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define DIX 10
#define CENT (DIX*DIX)
#define MILLE (CENT*DIX)
#define MILLION (MILLE*MILLE)

inline void error(const char* msg)
{
	printf("%s\n",msg);
	exit(EXIT_FAILURE);
}


//unidades
const char* unite[10] = { "cero", "uno", "dos", "tres", "cuatro",
			"cinco", "seis", "siete", "ocho", "nueve"
		        };

const char* entre_11_19[9]  = { "once", "doce", "trece", "catorce", 	"quince",
			        "dieciseis", "diecisiete", "dieciocho", "diecinueve"
			      };

const char* dizaines[9] = { "diez", "veinte", "treinta", "cuarenta", "cincuenta",
			  "sesenta", "setenta", "ochenta",
		          "noventa"
		    	  };



char result[100]="";
char resultDiv[100]="";
char resultMille[100]="";
char resultMillion[200]="";
char resultGlobal[200]="";



const char* cUnit(int* x)
{
	int ind = *x;
	*x-=*x;
	return unite[ind]; // 1 2 3 4 5 6 ...
}



const char* cDizaines(int* x)
{
	int ind = *x;
	if (*x%DIX==0 || *x>19) { // 10 20 30 40 50 ... || x>19
		if ((70<*x && *x<80) || (90<*x && *x<100)) { // 70<x<80 || 90<x<100
			*x -= *x-10-*x%DIX;
			strcpy(result, dizaines[ind/DIX-2]);

		}
		else {
			*x-=DIX*(*x/DIX);
			strcpy(result, dizaines[ind/DIX-1]);
		}
	}
	else { // 11 12 13 14 15 16 ...
		*x-=DIX+*x%DIX;
		strcpy(result, entre_11_19[ind%DIX-1]);
		return result;
	}

	
	if (80<ind && ind<100 && ind!=90)
		strcat(result, "\b-");
	else if (ind%10==1)
		strcat(result, " y "); // 21 31 41 51 61 ...
	else if (ind%10!=0) strcat(result, " y "); 

	return result;
}



const char* cCent(int* x)
{
	int ind = *x;
	*x-=CENT*(*x/CENT);

	if (ind/CENT>1) strcpy(result, unite[ind/CENT]);
	else strcpy(result, "");

	strcat(result, " ciento(s) ");

	return result;
}



const char* divs(int* dis)
{
	strcpy(resultDiv, ""); 
	while (*dis>0) {
		if (*dis/CENT != 0) {
			strcat(resultDiv, cCent(dis));
		}
		else if (*dis/DIX != 0) {
			strcat(resultDiv, cDizaines(dis));
		}
		else {
			strcat(resultDiv, cUnit(dis));
		}
	}
	return resultDiv;
}


const char* cMille(int* x)
{
	int dis = *x/MILLE;
	if (dis>0) { 
		if (dis!=1) 
			strcpy(resultMille, divs(&dis));
		strcat(resultMille, " mil ");
		*x %= MILLE;
	}

	return resultMille;
}



const char* cMillion(int* x)
{
	int dis = *x/MILLION;
	if (dis>0) { // calcule les millions
		strcpy(resultMillion, divs(&dis));
		strcat(resultMillion, " millon(es) ");
		*x %= MILLION;
	}

	strcat(resultMillion, cMille(x));
	return resultMillion;
}



const char* integerToString(int x)

{
	strcpy(resultGlobal, ""); 
	if (x==0) strcat(resultGlobal, "cero");
	while (x>0) {
		if (x/MILLION != 0) {
			strcat(resultGlobal, cMillion(&x));
		}
		else if (x/MILLE != 0) {
			strcat(resultGlobal, cMille(&x));
		}
		else if (x/CENT != 0) {
			strcat(resultGlobal, cCent(&x));
		}
		else if (x/DIX != 0) {
			strcat(resultGlobal, cDizaines(&x));
		}
		else {
			strcat(resultGlobal, cUnit(&x));
		}
	}
	return resultGlobal;
}



const char* doubleToStringAvecDevise(double x, const char* deviseUtiliser)

{
	int avant_virgule = (int)x;

	int apre_virgule = (x-avant_virgule+0.001)*CENT;

	integerToString(avant_virgule);
	strcat(resultGlobal, deviseUtiliser);

	strcat(resultGlobal, " punto ");

	if (apre_virgule<10) strcat(resultGlobal, "cero ");
	strcat(resultGlobal, divs(&apre_virgule));
	strcat(resultGlobal, "  "); 

	return resultGlobal;
}



const char* doubleToString(double x)

{
	int avant_virgule = (int)x;
	
	int apre_virgule = (x-avant_virgule+0.001)*CENT;

	if (apre_virgule>99) apre_virgule/=CENT;

	integerToString(avant_virgule);
	strcat(resultGlobal, " punto ");

	if (apre_virgule<10 && apre_virgule!=0) strcat(resultGlobal, "cero ");
	strcat(resultGlobal, divs(&apre_virgule));

	return resultGlobal;
}



bool valid_number(double d)
{
    static const double MAX = 999999999.99;
    static const double MIN = 0;
    return d>=MIN && d <=MAX;
}

int main7()
{
	int i;

	double number;
	printf("Entrer un nombre < 999999999.99\n");
	scanf("%lf", &number);

    if (valid_number(number))
        printf("%s\n\n", doubleToStringAvecDevise(number, "  "));
    else
        error("invalid number");

	return 0;
}
