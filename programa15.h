#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main15(){
 int op;
 int saldo_inicial=1000,saldo=saldo_inicial,depo=0,reti=0;
 do{
 system("cls");
 printf("BIENVENIDO\n");
 printf("El saldo de su cuenta es de 1000\n");
 printf("1)desea depositar\n");
 printf("2)desea retirar\n");
 printf("3)consultar saldo\n");
 printf("4)salir\n");
 printf("opcion-> ");
 scanf("%d",&op);
 switch(op){
  case 1:
   printf("cuanto es el monto a depositar: ");
   scanf("%d",&depo);
   saldo=saldo_inicial+depo;
   printf("deposito exitoso.... ");
   system("pause>>NULL");
      break;
  case 2:
   printf("cuanto es el monto a retirar: ");
   scanf("%d",&reti);
   if(reti<=saldo){
    saldo=saldo-reti;
    printf("retiro exitoso.... ");
   }
   else{
    printf("saldo insuficiente");
   }
   system("pause>>NULL");
   break;
  case 3:
   printf("el saldo de su cuenta es:%d\n",saldo);
   printf("consulta exitosa.... ");
      system("pause>>NULL");
   break;
  case 4:
   printf("transaccion completa, gracias por preferirnos");
   getch();
   break;
  default:
   printf("ingrese una opcion correcta");
   getch();
   
 }
}while(op!= 4);
 return 0;
}
