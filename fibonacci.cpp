# include <stdlib.h>
#include <stdio.h>
int fibo(int,int,int,int);

int main(){
	int contador,a=0,b=1,c=0;
	printf("Cuantos numeros de fibonacci quieres : ");
	scanf("%d",&contador);
	fibo(contador,c,b,a);
	
}


int fibo(int contador,int c,int b, int a){
	if(contador==0){
		return 0;
	}
	else{
		printf("%d %d  ",c,b); 
		c=b;
		b=a+b;
		a=c;
		return(fibo(contador-1,c,b,a));
		
	}
	
	
}
