#include <stdio.h>
#include "menu_p"

struct persona{
    char *nombre;
    int edad;
    char genero;
    char fn[8];
    struct alumno *ptrAlumno;
    struct persona *sigPersona;
};

struct alumno{
    char matricula[10];
    char carrera[5];
    int semestre;
    char corre [23];
    float calif[5][5];
};

int main(void){
    menu();
}
