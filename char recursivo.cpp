# include <stdlib.h>
#include <stdio.h>
#include <cstring>
int cambio(char[], char[], int,int);
int main(){
	char cadena1[100];
	char cadena2[100];
	int tamano=0;
	int aux=0;
	printf ("                              ***************Invertir palabra***************");
	printf("\n\n>>>>>Ingrese la palabra : ");
	fgets(cadena1,100,stdin);
	tamano=strlen(cadena1)-2;
	
	printf("\n>>>>>La palabra invertida es :");
cambio(cadena1,cadena2,tamano,aux);
}


int cambio(char cadena1[100],char cadena2[100],int tamano,int aux){

	if(tamano>=0){
	
		cadena2[aux]=cadena1[tamano];
		printf("%c",cadena2[aux]);
		return(cambio(cadena1,cadena2,tamano-1,aux+1));
		
	}
	else{
		
		//system("PAUSE");
		return 0;
	}
	
	
}
