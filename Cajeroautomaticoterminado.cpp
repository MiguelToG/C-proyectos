#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int CuentaNueva(int [], char[100][80], char[100][80], float[]);
int ReporteGeneral(int [], char[100][80], char [100][80], float[]);
int depositar(int[],float[]);
int menu(int [], char[100][80], char [100][80], float[]);
int cancelarcuenta(int [],  char[100][80], char [100][80], float[]);
int usuario(int [],  char[100][80], char [100][80], float[]);
void retirar(int [],int, float[]);
int consultarsaldo(int [],int,float[]);
int cambiarclave(int,  char[100][80]);
int menu(int cta[],  char clave[100][80], char nom[100][80], float saldo[]){

int eleccion=0;
int salir=1;
while(salir==1){
printf("                          *************MENU************* \n\n");
printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
printf(">>>>Presione 1 si desea crear una nueva cuenta            <<<<\n");
printf(">>>>Presione 2 si desea depositar                         <<<<\n");
printf(">>>>Presione 3 si desea cancelar una cuenta               <<<<\n");
printf(">>>>Presione 4 si desea ver su cuenta de usuario          <<<<\n");
printf(">>>>5 Reporte general                                     <<<<\n");
printf(">>>>Presione 6 si desea salir                             <<<<");
printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
scanf("%i",&eleccion);
switch(eleccion){
	case 1:
		CuentaNueva(cta,clave,nom,saldo);
	printf("\n>>>Presione 1 para regresar al menu");
	scanf("%i",&salir);
		system ("cls");
		break;
	case 2:
	depositar(cta,saldo);
    printf("\n>>>Presione 1 para regresar al menu");
	scanf("%i",&salir);
		system ("cls");
	break;
	case 3:
		cancelarcuenta(cta,clave,nom,saldo);
	printf("\n>>>Presione 1 para regresar al menu");
	scanf("%i",&salir);
		system ("cls");
	break;
	case 4:
		usuario(cta,clave,nom,saldo);

		system ("cls");
	break;
	case 5:
		ReporteGeneral(cta,clave,nom,saldo);
		printf("\n>>>Presione 1 para regresar al menu");
		scanf("%i",&salir);
		system ("cls");
		break;
			case 6:
				salir = 0;
				break;
	default:
		
		salir=1;
		system("cls");
	break;
}

}
}




int main(){
	int cta[100];
	 char clave[100][80]={{'a','b','c','d','f'},{'b','c','a','d','f','g'},{'a','s','d','d','f','g'}};
	 char nom[100][80]={{'T','o','r','o'},{'p','a','b','l','o'},{'p','e','p','e'}};
	float saldo[100];

	/*for(int i=0;i<100;i++){
		cta[i]=0;
		for(int y=0;y<6;y++)
		    clave[i][y]='\0';
	for(int y=0;y<6;y++)
		nom[i][y]='\0';
		saldo[i]=0;}*/
	
		cta[0]=1;
	
		saldo[0]=20.0;
		cta[1]=2;
		saldo[1]=10.0;
	 cta[2]=3;
	saldo[2]=60.0;
		
		
	menu(cta,clave,nom,saldo);
	

	
}

int CuentaNueva(int cta[], char clave[100][80], char nom[100][80], float saldo[]){
	int ncta=0;
system("cls");
	do{system("cls");
	printf("                     ***********Crear cuenta***********                 \n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf(">>>>Numero de cuenta (1-100)                              <<<<");
		printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
		scanf("%i",&ncta);
	}while (ncta<1||ncta>100);
	if (cta[ncta-1]==0){
		system("cls");
		cta[ncta-1]=ncta;
		printf("***************************\n");
		printf("Clave alfanumerica 6 caracteres\n");
		printf("Nombre\n");
		printf("Saldo\n");
		printf("***************************\n");
		
		printf(">");
		scanf("%s",&clave[ncta-1]);
		
			
		printf(">");
		scanf("%s",&nom[ncta-1]);
		printf(">");
		scanf("%f",&saldo[ncta-1]);
		return 1;
	} else {
		return 0;
	}
}
int depositar(int cta[],float saldo[100]){
 	int	cuent=0;
    int monto=0;
    system ("cls");
	printf("                     ***********Depositar***********                 \n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
 	printf(">>>>Ingresa tu numero de cuenta                           <<<<");
 	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
 	scanf("%i",&cuent);
		if (cta[cuent-1]!=0){
			system ("cls");
		printf("\n>>>Monto a depositar ");
		scanf("%d",&monto);
		saldo[cuent-1]=saldo[cuent-1]+monto;
		return 1;
	} else {
		return 0;
	}
	
}


int cancelarcuenta(int cta[], char clave[100][80], char nom[100][80], float saldo[]){
	int cuent=0;
system("cls");
printf("                     ***********Cancelar cuenta***********                 \n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf(">>>>Ingresa tu numero de cuenta                           <<<<");
	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
	scanf("%d",&cuent);
	if (saldo[cuent-1]==0){
		cta[cuent-1]=0;
		for(int y=0;y<6;y++)
		clave[cuent-1][y]='\0';
		for(int y=0;y<6;y++)
		nom[cuent-1][y]='\0';
		
		
		return 1;
	}
	else{
		return 0;
	}
	
}

int usuario(int cta[], char clave[100][80], char nom[100][80], float saldo[]){

	system("cls");
	int cuent=0;
     char clav[100][7];
	 
	int eleccion=0;
	int salir=1;
	printf("                     ***********Usuario***********                 \n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf(">>>>>>Ingrese su numero de cuenta                         <<<<");
	
	printf("%s",clave[cuent-1]);
	printf("\n>>>>>>Ingrese su clave                                    <<<<");
	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
	 scanf("%i",&cuent); 
	

	printf(">"); 
   scanf("%s",clav[1]);
  


  
	if(strcmp(clave[cuent-1],clav[1])==0){
		
	while(salir==1){
	system("cls");
		printf(">>>>>Si deseas retirar saldo presiona 1 \n");
		
		printf(">>>>>Si deseas consultar saldo presiona 2 \n");
		
		printf(">>>>>Si deseas cambiar clave presiona 3 \n");
		printf(">>>>>Si deseas regresar al menu presiona 4 ");
		scanf("%i",&eleccion);
		
		
		switch(eleccion){
			case 1:
				printf("%d",cuent);
				retirar(cta,cuent,saldo);
				printf(">>>>>Presiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
				system ("cls");
				break;
			case 2:
			    consultarsaldo(cta,cuent,saldo);
				printf("\n>>>>>Presiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
				break;	
			case 3:
				cambiarclave(cuent,clave);
				printf("\n>>>>>Presiona 1 si deseas consultar otra cosa y 0 si deseas salir ");
				scanf("%i",&salir);
			
			break;
			case 4:
				salir=0;
				system("cls");
				break;
			default:
			salir=1;
			system("cls");
			break;
		}
	}
		
	}
	else{
		printf("Datos incorrectos\n");
		system("PAUSE");
		return 0;
	}
}

void retirar(int cta[],int cuent, float saldo[]){
	system("cls");
	int retiro=0;
	int salir=1;
	while(salir==1){
		system("cls");
	printf("***********************************\n");
	printf("Escriba el monto que desea retirar");
	printf("\n***********************************\n");
	printf(">");
	scanf("%i",&retiro);
	
	if(saldo[cuent-1]>=retiro){
		system("cls");
	printf("***********************************\n");
	printf("\nEl retiro ha sido exitoso\n");
	printf("\n***********************************\n");
	saldo[cuent-1]=saldo[cuent-1]-retiro;
	salir=0;
	}
	else{
		system("cls");
	printf("***********************************\n");
	printf("No dispone de suficientes fondos");
	printf("\nSi desea hacer otro retiro presione 1");
	printf("\nSi desea salir presione 0 ");
	printf("\n***********************************\n");
	printf(">");
	scanf("%i",&salir);
	}
	
}
}

int consultarsaldo(int cta[],int cuent,float saldo[]) {
	system("cls");
	printf("***********************************\n");
	printf("EL saldo disponible es : %f",saldo[cuent-1]);
    printf("\n\n***********************************\n");
	return 1;
}

int cambiarclave(int cuent, char clave[100][80]){
	system("cls");
char nuevaclav[6];
int salir=0;
do{system("cls");
	printf("***********************************\n");
printf("Ingrese la nueva clave");
	printf("\n\n***********************************\n");
	printf(">");
scanf("%s",&nuevaclav);
if(strcmp(nuevaclav,clave[cuent-1])==0){
	system("cls");
	printf("***********************************\n");
	printf("La clave no puede ser la misma");
	printf("\n\n***********************************\n");
	system("PAUSE");
	salir=0;
}
else{system("cls");
	strcpy (clave[cuent-1],nuevaclav);
	printf("***********************************\n");
	printf("la cuenta ha sido cambiada con exito");
	printf("\n\n***********************************\n");
	salir=1;
}
}
while(salir==0);



}


int ReporteGeneral(int cta[], char clave[100][80], char nom[100][80], float saldo[]){
	int cuent=0;
	system("cls");
	printf("                     ***********Reporte general***********                 \n\n");
	printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
	printf(">>>>Ingresa tu numero de cuenta                           <<<<");
	printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<");
	printf("\n>");
	scanf("%i",&cuent);
	printf("*************************************\n");
	printf(" Cuenta    Clave    Nombre    Saldo\n");
	printf("    %i       %s     %s     %.2f",cta[cuent-1],clave[cuent-1],nom[cuent-1],saldo[cuent-1]);
		printf("\n*************************************\n");
}

