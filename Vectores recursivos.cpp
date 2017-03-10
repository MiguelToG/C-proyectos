#include <stdlib.h>
#include <stdio.h>
int vec(int,int[],int);
int main(){
	int contador=0;
	int n[10];
	int suma=0;
	printf("                         *********************Suma de vectores*********************");
	printf("\nn>>>>>Cuantos numeros desea capturar y sumar: ");
	scanf("%d",&contador);
	vec(contador,n,suma);
}

int vec(int contador,int n[],int suma){
	if(contador==0){
		printf("\n>>>>>La suma de esos numeros es: %d",suma);
	}
	else{
		contador--;
		n[contador]=contador;
		suma=suma+n[contador];
		printf("\n >%d",n[contador]);
		return(vec(contador,n,suma));
	}
}


