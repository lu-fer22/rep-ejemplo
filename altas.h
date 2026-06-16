#include <stdio.h>
#include <stdlib.h>

void altas(struct persona **ptr);
struct persona *nuevaPersona(void);


struct persona *nuevaPersona(void){
    struct persona *ptrTemp=NULL;
    ptrTemp = (struct persona *) malloc(sizeof(struct persona));

    if(ptrTemp==NULL){
        printf("No se reservo memoria\n");
        return NULL;
    }else{
        return ptrTemp;
    }
}

void altas(struct persona **ptr){
    struct persona *ptrAux;
}
