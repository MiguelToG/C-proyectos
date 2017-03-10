# include <stdlib.h>
# include <stdio.h>
int suma(int, int );
int main(){
	int numero=0;
    printf("                            ****************Suma de digitos****************");
	do{
	
	printf("\n\n>>>>>>>>>>Ingrese los digitos a sumar :");
	scanf("%d",&numero);
}
while (numero<0);
int sumas=0;
	suma(numero,sumas);
	
}


suma(int n, int sumas){
	

	if(n>0){
sumas=sumas+(n%10);

	 return(suma(n/10,sumas));

}
	 else{
	 printf(">>>>>>>>>>La suma de los digitos es : %d",sumas);
	 return 0;
}
	
	
}
