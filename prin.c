#include <stdio.h>
#include "menu.h"
#include "altas.h"

struct persona{
    char *nombre;
    int edad;
    char genero;
    char fn[8];
    struct alumno *ptrAlum;
    struct persona *ptrSig;
};

struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char corre [23];
    float calif[5][5];
};

int main(void){
    int op;
    struct persona *ptr;

    do{
        op=menuPrincipal();

        switch(op){
            case 1: 
                altas(&ptr);
                break;
            case 2:
                break;
            case 3:
                break;
            default: 
                break;
        }
    }while(op!=0);
}
