#include <stdlib.h>
#include <stdio.h>
int serie(int);
int main(){
	int n=0;
	printf("                     ***************Serie de numeros***************");
	printf("\n\n>>>>>>>>>>Ingrese Hasta donde termina la serie :");
	scanf("%d",&n);
//	printf("%d",n);
	serie(n);
}
int serie(int n){
	
	if (n>0){
		
		
		
		return(serie(n-1));
	}
	else
	return 0;
	
}
