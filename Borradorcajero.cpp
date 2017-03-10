#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int CuentaNueva(int [], char*[100], char*[100], float[]);
int ReporteGeneral(int [], char*[100], char*[100], float[]);
int depositar(int[],float[]);
int menu(int [], char*[100], char*[100], float[]);
int cancelarcuenta(int [],  char*[100], char*[100], float[]);
int usuario(int [],  char*[100], char*[100], float[]);
void retirar(int [],int, float[]);
int consultarsaldo(int [],int,float[]);
int cambiarclave(int,  char*[100]);
int menu(int cta[],  char* clave[100], char* nom[100], float saldo[]){

int eleccion=0;
int salir=1;
while(salir==1){

printf("Presione 1 si desea crear una nueva cuenta\n");
printf("Presione 2 si desea depositar\n");
printf("Presione 3 si desea cancelar una cuenta\n");
printf("Presione 4 si desea ver su cuenta de usuario\n");
scanf("%i",&eleccion);
switch(eleccion){
	case 1:
		CuentaNueva(cta,clave,nom,saldo);
		//ReporteGeneral(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato presione 1 si desea salir presione 0");
		scanf("%i",&salir);
		break;
	case 2:
	depositar(cta,saldo);
    ReporteGeneral(cta,clave,nom,saldo);
    printf("\nSi desea consultar otro dato del menu presione 1 si desea salir presione 0");
		scanf("%i",&salir);
	break;
	case 3:
		cancelarcuenta(cta,clave,nom,saldo);
		ReporteGeneral(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato del menu presione 1 si desea salir presione 0");
		scanf("%i",&salir);
	break;
	case 4:
		usuario(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato del menu presione 1 si desea salir presione 0");
		scanf("%i",&salir);
	break;
	default:
		printf("El numero ingresado es incorrecto");
		salir=1;
	break;
}

}
}




int main(){
	int cta[100];
	 char* clave[100];
	 char* nom[100];
	float saldo[100];
	
	for(int i=0;i<100;i++){
		cta[i]=0;
		    clave[i]='\0';
	
		nom[i]='\0';
		saldo[i]=0;}
		//dos[1]="hola";
		//printf("s");
		//scanf("%s",&tres);
		//tres=dos[1];
		//printf("%s",dos[1]);
	//	printf("%s",tres);
		//if(dos[1]==tres)
		//printf ("ji ju ja");
		cta[1]=2;
		//printf("ingresa la contraseña");
		//scanf("%s",&clave[1]);
	    clave[1]="abc";
		printf("%s",clave[1]);
	 nom[1]="pedro";
		//printf("");
		//scanf("%s",nom[1]);
		saldo[1]=20.0;
		cta[2]=3;
		clave[2]="dsa";
		printf("%s",clave[2]);
	 nom[2]="pedro";
	 saldo[2]=10.0;
	 cta[3]=4;
		clave[3]="asd";
		printf("%s",clave[3]);
	 nom[3]="toro";
	 saldo[3]=60.0;
		ReporteGeneral(cta,clave,nom,saldo);
		/*char* h="hola";
		char* v="hola";
		printf("1");
		scanf("%s",&h);
		printf("2");
		scanf("%s",&v);
			if(h==v)
			printf("igual");
			else
			printf("desigual");*/
	menu(cta,clave,nom,saldo);
		/*
	CuentaNueva(cta,clave,nom,saldo);
	ReporteGeneral(cta,clave,nom,saldo);*/
}

int CuentaNueva(int cta[], char* clave[100], char* nom[100], float saldo[]){
	int ncta=0;

	do{
		printf("Numero de cuenta (1-100): ");
		scanf("%i",&ncta);
	}while (ncta<1||ncta>100);
	if (cta[ncta-1]==0){
		cta[ncta-1]=ncta;
		printf("Clave alfanumerica 6 caracteres: ");
		scanf("%s",&clave[ncta-1]);
			printf("Nombre: ");
		
		scanf("%s",&nom[ncta-1]);
		printf("Saldo: ");
		scanf("%f",&saldo[ncta-1]);
		return 1;
	} else {
		return 0;
	}
}
int depositar(int cta[],float saldo[100]){
 	int	cuent=0;
    int monto=0;
 	printf("Ingrese el numero de cuenta");
 	scanf("%i",&cuent);
		if (cta[cuent-1]!=0){
		printf("Monto a depositar");
		scanf("%d",&monto);
		saldo[cuent-1]=saldo[cuent-1]+monto;
		return 1;
	} else {
		return 0;
	}
	
}


int cancelarcuenta(int cta[], char* clave[100], char* nom[100], float saldo[]){
	int cuent=0;

	printf("Ingresa tu numero de cuenta");
	scanf("%d",&cuent);
	if (saldo[cuent]==0){
		cta[cuent-1]=0;
		
		clave[cuent-1]='\0';
		
		nom[cuent-1]='\0';
		
		
		return 1;
	}
	else{
		return 0;
	}
	
}

int usuario(int cta[], char* clave[100], char* nom[100], float saldo[]){
//	ReporteGeneral(cta,clave,nom,saldo);
	
	int cuent=0;
     char clav[100];
	 char* c1;char* c2;
	int eleccion=0;
	int salir=1;
	printf("Ingrese su numero de cuenta\n");
	scanf("%i",&cuent);
	printf("Ingrese su clave ");
	scanf("%s",clav); 
	//printf("\n %s",clave);
//	printf("\n %s",clav);
    c1=(clave[cuent-1]);
   //printf("\n\n%s",c1);
   printf("%s",nom[cuent-1]);
	if(strcmp(c1,clav)==0){
		system("cls");
	while(salir==1){
	
		printf("Si deseas retirar saldo presiona 1 \n");
		
		printf("Si deseas consultar saldo presiona 2 \n");
		
		printf("Si deseas cambiar clave presiona 3 \n");
		scanf("%i",&eleccion);
		switch(eleccion){
			case 1:
				printf("%d",cuent);
				retirar(cta,cuent,saldo);
				//system ("cls");
				printf("presiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
				break;
			case 2:
			    consultarsaldo(cta,cuent,saldo);
				printf("\npresiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
				break;	
			case 3:
				cambiarclave(cuent,clave);
				printf("\npresiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
			
			break;
		}
	}
		
	}
	else{
		printf("Datos incorrectos");
		return 0;
	}
}

void retirar(int cta[],int cuent, float saldo[]){
	system("cls");
	int retiro=0;
	int salir=1;
	while(salir==1){
	
	printf("Escriba el monto que desea retirar");
	scanf("%i",&retiro);
	
	if(saldo[cuent-1]>=retiro){
	printf("\nEl retiro ha sido exitoso");
	saldo[cuent-1]=saldo[cuent-1]-retiro;
	
	}
	else{
		system("cls");
	printf("No dispone de suficientes fondos");
	printf("\nSi desea hacer otro retiro presione 1");
	printf("\nSi desea salir presione 0 ");
	scanf("%i",&salir);
	}
	salir=0;
}
}

int consultarsaldo(int cta[],int cuent,float saldo[]) {
	printf("EL saldo disponible es : %f",saldo[cuent-1]);

	return 1;
}

int cambiarclave(int cuent, char* clave[100]){
char* nuevaclav;
int salir=0;
do{
printf("Ingrese la nueva clave");
scanf("%s",&nuevaclav);
if(nuevaclav==clave[cuent-1]){
	printf("La clave no puede ser la misma");
	salir=0;
}
else{
	clave[cuent-1]=nuevaclav;
	printf("la cuenta ha sido cambiada con exito");
	salir=1;
}
}
while(salir==0);



}


int ReporteGeneral(int cta[], char* clave[100], char* nom[100], float saldo[]){
	int cuent=0;
	printf("Cual es tu cuenta");
	scanf("%i",&cuent);
	printf("\n\n Cuenta    Clave    Nombre       Saldo\n");
	printf("%i  %s   %s     %.2f",cta[cuent-1],clave[cuent-1],nom[cuent-1],saldo[cuent-1]);
	/*for(int i=0;i<100;i++){
		if (cta[i]!=0){
		printf("%i    %s    %s     %.2f",cta[i],clave[i],nom[i],saldo[i]);
	}
	}*/
}

