#include <stdlib.h>
#include <stdio.h>
int serie(int);
int main(){
	int n=0;
	printf("                     ***************Serie de numeros en decremento***************");
	printf("\n\n>>>>>>>>>>Ingrese Hasta donde termina la serie :");
	scanf("%d",&n);

	serie(n);
}
int serie(int n){
	
	if (n>0){
		printf("%d ",n);
		
		
		return(serie(n-1));
	}
	else
	return 0;
	
}
