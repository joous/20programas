
#include <stdio.h>
#include <windows.h>
 
void gotoxy(int x , int y);
 
 
int main14()
{

    int x = 10 , y = 10;
    gotoxy(x,y);
    printf("*");
 
 
   
    do
    {
        //intervalo
        Sleep(100);
 
        // izquierda
        if (GetAsyncKeyState(0x25)){
 
            //regreso
            gotoxy(x,y); printf(" ");
 
            //posicion
            x--;
            //nueva posicion
            gotoxy(x,y); printf("*");
 
        }
 
 
         //derecha
        if (GetAsyncKeyState(0x27)){
 
          
            gotoxy(x,y); printf(" ");
 
          
            x++;
            
            gotoxy(x,y); printf("*");
 
        }
 
 
        // ABAJO
        if (GetAsyncKeyState(0x28)){
 
         
            gotoxy(x,y); printf(" ");
 
          
            y++;
        
            gotoxy(x,y); printf("*");
 
        }
 
 
        // ARRIBA
        if (GetAsyncKeyState(0x26)){
 
           
            gotoxy(x,y); printf(" ");
 
          
            y--;
        
            gotoxy(x,y); printf("*");
 
        }
 
 
 
    }while(!0);
 
 
    
    
 
    return 0;
}
 
void gotoxy(int x , int y){
 
//consola
HANDLE consola = GetStdHandle(STD_OUTPUT_HANDLE);
 
//coordenadas
COORD pos;
pos.X = x;
pos.Y = y;
 
//set posicion
SetConsoleCursorPosition(consola,pos);
 
}
