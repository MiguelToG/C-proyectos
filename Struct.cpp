#include <stdio.h>
#include <stdlib.h>
struct Fecha{
int dd,mm,aa;
};
struct direccion{
char cd[80];
int cp,numero;
char calle[80];	
};
struct Persona{
	char nombre[100];
	char genero;
	float peso;
	float estatura;
	int edad;
	Fecha fecho;
	direccion dir;
};
struct docente{
	char categoria[80];
	float saldo,ingreso;
	Persona person;
};
struct alumno{
	Persona person;
	char carrera[80];
	char sem[10];
	char grupo[3];
	float ingreso,calificaciones;
};
struct escuela{
	alumno A;
	docente D;
};

escuela llenarA(escuela);
void mostrarA(escuela); 
escuela llenarD(escuela);
void mostrarD(escuela);
int main(){
	int h=0;
escuela uaa;
	while(h<1 || h>2){
	system("cls");
	printf("                          *************Escuela*************\n\n");
	printf(">>>>>>>>Presione 1 si es un alumno o 2 si es docente");
    scanf("%i",&h);   
    if(h==1){
    uaa=llenarA(uaa);
    mostrarA(uaa);
	}
	if(h==2){
		uaa=llenarD(uaa);
    mostrarD(uaa);
	}

}

}
escuela llenarA(escuela hola) {
printf("***Datos del alumno***\n");
printf(">Carrera ");
fflush(stdin);
gets(hola.A.carrera);
printf(">Semestre ");
fflush(stdin);
gets(hola.A.sem);
printf(">Grupo ");
fflush(stdin);
gets(hola.A.grupo);
printf(">Ingreso ");
scanf("%f",&hola.A.ingreso);
printf(">Calificaciones ");
scanf("%f",&hola.A.calificaciones);
	
printf("***Datos personales***\n");
printf(">Genero: ");
fflush(stdin);
scanf("%c",&hola.A.person.genero);
printf (">Nombre: ");
fflush(stdin);
gets(hola.A.person.nombre);
printf(">Peso:");
scanf("%f",&hola.A.person.peso);
printf(">Estatura: ");
scanf("%f",&hola.A.person.estatura);
printf(">Edad:");
scanf("%i",&hola.A.person.edad);

printf("***Direccion***\n");
printf(">Ciudad: ");
fflush(stdin);
gets(hola.A.person.dir.cd);
printf(">Codigo postal: ");
scanf("%i",&hola.A.person.dir.cp);
printf(">Numero de telefono: ");
scanf("%i",&hola.A.person.dir.numero);
printf(">Calle: ");
fflush(stdin);
gets(hola.A.person.dir.calle);

printf("***Fecha de nacimiento***\n");
printf(">Dia: ");
scanf("%i",&hola.A.person.fecho.dd);
printf(">Mes: ");
scanf("%i",&hola.A.person.fecho.mm);
printf(">Año: ");
scanf("%i",&hola.A.person.fecho.aa);
return hola;
}
///////////////////////////////////////*********************************
escuela llenarD(escuela hola) {
printf("***Datos del Docente***\n");
printf(">Categoria ");
fflush(stdin);
gets(hola.D.categoria);
printf(">Ingreso ");
scanf("%f",&hola.D.ingreso);
printf(">Saldo ");
scanf("%f",&hola.D.saldo);
	
printf("***Datos personales***\n");
printf(">Genero: ");
fflush(stdin);
scanf("%c",&hola.D.person.genero);
printf (">Nombre: ");
fflush(stdin);
gets(hola.D.person.nombre);
printf(">Peso:");
scanf("%f",&hola.D.person.peso);
printf(">Estatura: ");
scanf("%f",&hola.D.person.estatura);
printf(">Edad:");
scanf("%i",&hola.D.person.edad);

printf("***Direccion***\n");
printf(">Ciudad: ");
fflush(stdin);
gets(hola.D.person.dir.cd);
printf(">Codigo postal: ");
scanf("%i",&hola.D.person.dir.cp);
printf(">Numero de telefono: ");
scanf("%i",&hola.D.person.dir.numero);
printf(">Calle: ");
fflush(stdin);
gets(hola.D.person.dir.calle);

printf("***Fecha de nacimiento***\n");
printf(">Dia: ");
scanf("%i",&hola.D.person.fecho.dd);
printf(">Mes: ");
scanf("%i",&hola.D.person.fecho.mm);
printf(">Año: ");
scanf("%i",&hola.D.person.fecho.aa);
return hola;
}
void mostrarD(escuela uaa){
		printf(" %s %s %s %2f %2f %c %s %2f %2f %i %s %i %i %s %i %i %i",uaa.D.categoria,uaa.D.ingreso,uaa.D.saldo,
		uaa.D.person.genero,uaa.D.person.nombre,
		uaa.D.person.peso,uaa.D.person.estatura,uaa.D.person.edad,uaa.D.person.dir.cd,uaa.D.person.dir.cp,uaa.D.person.dir.numero,uaa.D.person.dir.calle,
		uaa.D.person.fecho.dd,uaa.D.person.fecho.mm,uaa.D.person.fecho.aa);
}
void mostrarA(escuela uaa){
		printf(" %s %s %s %2f %2f %c %s %2f %2f %i %s %i %i %s %i %i %i",uaa.A.carrera,uaa.A.sem,uaa.A.grupo,uaa.A.ingreso,uaa.A.calificaciones,uaa.A.person.genero,uaa.A.person.nombre,
		uaa.A.person.peso,uaa.A.person.estatura,uaa.A.person.edad,uaa.A.person.dir.cd,uaa.A.person.dir.cp,uaa.A.person.dir.numero,uaa.A.person.dir.calle,
		uaa.A.person.fecho.dd,uaa.A.person.fecho.mm,uaa.A.person.fecho.aa);
}
