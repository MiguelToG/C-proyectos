#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
const char CONTRASENA[] ="ok";
const int numIntentos =3;
int i;
char contrasena[100];
for (i=0; i<numIntentos; i++) {
printf("contrasena: ");
scanf("%s", contrasena);
if (strcmp(CONTRASENA, contrasena) != 0) {
printf("\tcontrasena invalida\n");
continue;
}
printf("\n*** Bienvenido al programa ***\n");
break;
}
if (i == numIntentos) {
printf("\nPrograma no ejecutado.\n");
return 1;
}
printf("\nPrograma ejecutando...\n");
//programa
return 0;
}
