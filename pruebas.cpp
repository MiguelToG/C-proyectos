#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(){
    char hola[100][10]={{'a','b'},{'a','b'}};
	char hola1[200][10]={{'a','b'},{'a','b'}};
	
	printf("");
	scanf("%s",&hola[1]);
	printf("%s",hola[1]);
	//scanf("%s",&hola1[1]);
	//printf("%s",hola1[1]);
	//hola[1]="hola";
	//char c[100]="hola";
	//hola[1]={'a','b'};
	//char* c[100];
	//char *strcpy(char*c,char*hola[1]);
	//char* c2[100];
	//char *strcpy(char*c2,char*hola[1]);
	
	if(strcmp(hola[1],hola1[1])==0)
	//if(hola[1]==hola1[1])
	printf("igualdad");
}
