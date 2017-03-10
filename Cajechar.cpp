#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int CuentaNueva(int [], char[100][6], char[100][80], float[]);
int ReporteGeneral(int [], char[100][6], char[100][80], float[]);
int depositar(int[],float[]);
int menu(int [], char[100][6], char[100][80], float[]);
int cancelarcuenta(int [], char[100][6], char[100][80], float[]);
int usuario(int [], char[100][6], char[100][80], float[]);
void retirar(int [],int, float[]);
int consultarsaldo(int [],int,float[]);
int cambiarclave(int,char[100][6]);
int menu(int cta[], char clave[100][6], char nom[100][80], float saldo[]){

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
		ReporteGeneral(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato presione 1 si desea salir presione 0");
		scanf("%i",&salir);
		break;
	case 2:
	depositar(cta,saldo);
    ReporteGeneral(cta,clave,nom,saldo);
    printf("\nSi desea consultar otro dato presione 1 si desea salir presione 0");
		scanf("%i",&salir);
	break;
	case 3:
		cancelarcuenta(cta,clave,nom,saldo);
		ReporteGeneral(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato presione 1 si desea salir presione 0");
		scanf("%i",&salir);
	break;
	case 4:
		usuario(cta,clave,nom,saldo);
		printf("\nSi desea consultar otro dato presione 1 si desea salir presione 0");
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
	char clave[100][6];
	char nom[100][80];
	float saldo[100];
	for(int i=0;i<100;i++){
		cta[i]=0;
		for(int y=0;y<6;y++)
	        clave[i][y]='\0';
		for (int y=0;y<80;y++)
		nom[i][y]='\0';
		saldo[i]=0;}
		
		cta[1]=2;
		printf("ingresa la contraseña");
		scanf("%s",&clave[1]);
		//clave[1][1]='p';
		nom[1][1]='p';
		saldo[1]=20;
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

int CuentaNueva(int cta[], char clave[100][6], char nom[100][80], float saldo[]){
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


int cancelarcuenta(int cta[], char clave[100][6], char nom[100][80], float saldo[]){
	int cuent=0;

	printf("Ingresa tu numero de cuenta");
	scanf("%d",&cuent);
	if (saldo[cuent]==0){
		cta[cuent-1]=0;
		for (int i=0;i<6;i++){
		clave[cuent-1][i]='\0';}
		for (int i=0;i<80;i++)
		nom[cuent-1][i]='\0';
		
		
		return 1;
	}
	else{
		return 0;
	}
	
}

int usuario(int cta[], char clave[100][6], char nom[100][80], float saldo[]){
	int cuent=0;
	char clav[100][6];
	//int c1=0,c2=0;
	char* c1;char* c2;
	int eleccion=0;
	int salir=1;
	printf("Ingrese su numero de cuenta\n");
	scanf("%i",&cuent);
	printf("Ingrese su clave ");
	scanf("%s",&clav[cuent-1]);

c1=(clave[cuent-1]);
c2=(clav[cuent-1]);
printf("\n%s %s",c1,c2);
	if(c1==c2){
		//system("cls");
	while(salir==1){
	
		printf("Si deseas retirar saldo presiona 1 \n");
		scanf("%i",eleccion);
		printf("Si deseas consultar saldo presiona 2 \n");
		scanf("%i",eleccion);
		printf("Si deseas cambiar clave presiona 3 \n");
		scanf("%i",eleccion);
		switch(eleccion){
			case 1:
				retirar(cta,cuent,saldo);
				system ("cls");
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
	
	if(cta[cuent-1]>retiro){
	printf("El retiro ha sido exitoso");
	cta[cuent-1]=cta[cuent-1]-retiro;
	}
	else{
		system("cls");
	printf("No dispone de suficientes fondos");
	printf("Si desea hacer otro retiro presione 1");
	scanf("%i",&salir);
	printf("Si desea salir presione 0");
	scanf("%i",&salir);
	}
}
}

int consultarsaldo(int cta[],int cuent,float saldo[]) {
	printf("EL saldo disponible es :",saldo[cuent]);

	return 1;
}

int cambiarclave(int cuent, char clave[100][6]){
char* nuevaclav;
int salir=0;
do{
printf("Ingrese la nueva clave");
scanf("%s",&nuevaclav);}
while(salir==0);

if(nuevaclav==clave[cuent-1]){
	printf("La clave no puede ser la misma");
	salir=0;
}
else{
	//clave[cuent-1]=nuevaclav;
	printf("la cuenta ha sido cambiada con exito");
	salir=1;
}

}


int ReporteGeneral(int cta[], char clave[100][6], char nom[100][80], float saldo[]){
	int cuent=0;
	printf("Cual es tu cuenta");
	scanf("%i",&cuent);
	printf("\n\n Cuenta    Clave    Nombre       Saldo\n");
	printf("%i    %s    %s     %.2f",cta[cuent-1],clave[cuent-1],nom[cuent-1],saldo[cuent-1]);
	/*for(int i=0;i<100;i++){
		if (cta[i]!=0){
		printf("%i    %s    %s     %.2f",cta[i],clave[i],nom[i],saldo[i]);
	}
	}*/
}

