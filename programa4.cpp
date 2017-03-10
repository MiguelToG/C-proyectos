# include <stdlib.h>
# include <stdio.h>
int suma(int, int );
int main(){
	int numero=0;
    printf("                            ****************Numero de digitos****************");
	do{
	
	printf("\n\n>>>>>>>>>>Ingrese un numero natural :");
	scanf("%d",&numero);
}
while (numero<0);
int sumas=0;
	suma(numero,sumas);
	
}


suma(int n, int sumas){
	

	if(n>0){
sumas++;

	 return(suma(n/10,sumas));

}
	 else{
	 printf(">>>>>>>>>>El numero de digitos fue : %d",sumas);
	 return 0;
}
	
	
}
