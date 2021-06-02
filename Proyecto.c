/*
 * Proyecto.c
 * Por: Dr. VÌctor Alberto GÛmez PÈrez
 * Universidad de la Sierra Sur
 */


#include <stdio.h>
#include <stdlib.h>
#include "Listas.h"


int main(){
	struct nodo *Lista;
        int pos;
        Lista=Crear_Lista();
        Imprimir_Lista(Lista);
        Eliminar_Principio(&Lista);
        Eliminar_Final(&Lista);
        Insertar_Principio(&Lista,10);
        Insertar_Principio(&Lista,25);
        Insertar_Principio(&Lista,46);
        Insertar_Final(&Lista,21);
        Insertar_Final(&Lista,28);
        Insertar_Principio(&Lista,30);
        Insertar_Antes(&Lista,1,25);//Inserta el 1 antes del 25
        Insertar_Despues(&Lista,1,25);//Insertar el 1 despu√©s del 25
        Insertar_Antes(&Lista,2,14);
        Insertar_Despues(&Lista,2,14);
	Imprimir_Lista(Lista);
        pos=Buscar_Elemento(Lista,28);
        printf("Elemento encontrado en la posici√≥n %d\n",pos);
        pos=Buscar_Elemento(Lista,91);
        printf("Elemento encontrado en la posici√≥n %d\n",pos);
        Eliminar_Principio(&Lista);
       	Imprimir_Lista(Lista);
        Eliminar_Final(&Lista);
       	Imprimir_Lista(Lista);
        Eliminar_X(&Lista, 90);
        Imprimir_Lista(Lista);
        Eliminar_X(&Lista, 25);
        Imprimir_Lista(Lista);
        Eliminar_Lista(&Lista);
        Imprimir_Lista(Lista);
        Insertar_Principio(&Lista,121);
        Imprimir_Lista(Lista);
        Eliminar_Final(&Lista);
        Imprimir_Lista(Lista);
	return 0;
}
