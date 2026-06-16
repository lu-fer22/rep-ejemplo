ifndef MENU_P
#define MENU_P

#include <stdio.h>

static inline int menu(void) {
    int op;

    printf("Seleccione una opcion\n");
    printf("1.- Insertar\n");
    printf("2.- Mostrar\n");
    printf("3.- Liberar\n");
    printf("0.- Salir\n");

    scanf("%d", &op);

    return op;
}

#endif
