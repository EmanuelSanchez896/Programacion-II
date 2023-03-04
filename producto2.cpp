// Proyecto de aray y funciones 

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

struct producto {
	int codigo;
	float precio;
	char descripcion [40];
	char fechadevencimiento [40];
	int descuento;
	int existencia;

} producto [5];

// prototipos de funciones 

void menu ();
void ingresarproducto ();
void mostrarproducto ();

int main () {
	
	menu ();
	return 0;
}

void menu () {
	
	int opcion;
	
	do {
		
		printf ("1- ingresar productos : \n");
		printf ("2- mostrar productos: \n ");
		scanf ("%d", & opcion);
		
		switch (opcion) {
			case 1: ingresarproducto ();
				break;
					
					case 2: mostrarproducto ();
						break;
							
							default : printf ("opncion incorrecta");
							
		}
	} while (opcion!=2);
}

void ingresarproducto (){
	
	for (int i=0 ; i<5 ; i++) {
		
		printf ("ingresar codigo # %i :",i+1);
			scanf ("%i", & producto[i].codigo);
			fflush (stdin);
			printf ("ingresar descripcion del producto # %d :", i+1);
			gets (producto[i].descripcion);
			fflush (stdin);
			printf ("ingresar fecha de vencimiento # %d :", i+1);
			gets (producto[i].fechadevencimiento);
			printf ("ingresar precio del producto # %.2f :", i+1);
			scanf ("%f", & producto[i].precio);
			printf ("ingresar existencia del producto # %i :", i+1);
			scanf ("%i", & producto[i].existencia);
			printf ("ingresar descuento del producto # %d :", i+1);
			scanf ("%i", & producto[i].descuento);
			printf ("\n \n");
		
	}

}

void mostrarproducto () {
	
	for (int i=0 ; i<5 ; i++){
	printf ("\n \n");	
	
	printf ("PRODUCTO # %d \n",i+1);
	
	printf ("ingresar codigo # %i \n:", producto[i].codigo);
		
	printf ("ingresar descripcion del producto # %d \n:", producto[i].descripcion);
			
	printf ("ingresar fecha de vencimiento # %d \n:", producto[i].fechadevencimiento);
			
	printf ("ingresar precio del producto # %.2f \n:", producto[i].precio);
			
	printf ("ingresar existencia del producto # %i \n:", producto[i].existencia);
		
	printf ("ingresar descuento del producto # %i \n:", producto[i].descuento);
	
	}
		
}
