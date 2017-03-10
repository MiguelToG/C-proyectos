#include<stdio.h>
#include <stdlib.h>

void sust(int []);
int suma(int []);
void imprimirDatos(int );
int contador=0;

int main(){
printf("Cuantos numeros vas a  capturar");
scanf("%i",&contador);

int vect[contador];
 for(int i=0;i<contador;i++){
      printf("Ingres un numero entero pueden ser positivos y negativos\n");
      scanf("%i",&vect[i]);
	  }
sust(vect);
suma(vect);
}


void sust(int vect[]){
	for(int i=0;i<contador;i++){
	if(vect[i]<0){
		vect[i]=vect[i]*-1;
	}
}
}
int suma(int vect[]){
	int more=0;
	for(int i=0;i<contador;i++){
		more=more+vect[i];
	}
	imprimirDatos(more);
	
}

void imprimirDatos(int more){
	printf("La suma de los datos es: %d\n",more );

	return;
}
