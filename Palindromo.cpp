
#include <stdio.h>
#include <cstring>
int cambio(char[], char[], int,int);
int main(){
	char cadena1[100];
	char cadena2[100];
	int tamano=0;
	int aux=0;
	printf ("                              ***************Palindromo***************");
	printf("\n\n>>>>>Ingrese la palabra : ");
	gets(cadena1);
	tamano=strlen(cadena1)-1;
	
cambio(cadena1,cadena2,tamano,aux);
}


int cambio(char cadena1[100],char cadena2[100],int tamano,int aux){

	if(tamano>=0){
	
		cadena2[aux]=cadena1[tamano];
	
		return(cambio(cadena1,cadena2,tamano-1,aux+1));
		
	}
	else{
		
		
		if((strcmp(cadena2,cadena1))==0){
			printf("\n>>>>>La cadena es un palindromo :");
			
		}
		else {
		printf("\n>>>>>La cadena no es un palindromo");}
		//system("PAUSE");
		return 0;
	}
	
	
}
