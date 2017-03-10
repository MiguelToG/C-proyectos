#include <stdlib.h>
#include <stdio.h>


//////////////zona de declaracion de structs//////////////
struct Librerias{
int Codigo;
char Autor[50];
char Titulo[50];
int Ejemplares;
};
//////////////zona del main y prototipo de funciones//////////////
void llenar(Librerias[]);
int menu(int);
int main(){
	int opcion=1;
	menu(opcion);
	
	
	
}
//////////////zona de funciones importantes//////////////

int menu(int opcion){
	Librerias MiLibreria[100]={{0," "," ",0},{1,"El Tortuguero","Tortugas al agua",2}};
	while(opcion>=1 && opcion<3)
	system("Cls");
	printf("					Libreria *Los conejos*");
	printf("\n\nOpcion1: Prestamo de libros");
	printf("\nOpcion2: Devolucion de libros");
	printf("\nOpcion3: Salir");
	scanf("%i",&opcion);
	switch(opcion){
		case 1:
			llenar(MiLibreria);
		break;
	}
}

void llenar(Librerias MiLibreria[]){
	int i=0;
	printf("Ingresa el codigo del libro");
	scanf("%i",&i);
	if(i>=1 && i<=100){
		printf("Autor: %s",MiLibreria[i].Autor);
		printf("\nTitulo: %s",MiLibreria[i].Titulo);
}
else{printf("Error el libro no esta registrado");
}
}
	

