#include <stdlib.h>
#include <stdio.h>
int serie(int, int);
int main(){
	int n=0;
	printf("                     ***************Serie de numeros***************");
	printf("\n\n>>>>>>>>>>Ingrese Hasta donde termina la serie :");
	scanf("%d",&n);
	int contador=0;
	serie(n,contador);
}
int serie(int n, int contador){
	if (n>0){
		contador++;
		printf("%d ", contador);
		
		return(serie(n-1,contador));
	}
	else
	return 0;
	
}


