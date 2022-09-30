#include<stdio.h>

void imprimir(int,int);
int main(){
	
	int inicio,fin;
	printf("Ingresar el inicio\n");
	scanf("%d",&inicio);
	
	printf("\nIngresaaar 150\n");
	
	printf("\nIngresar el final\n");
	scanf("%d",&fin);
	
	imprimir(inicio, fin);
	return 0;
	
}
void imprimir(int ini, int fin){
	if(ini < fin){
		printf("%d ",ini);
		ini=ini*3;
		imprimir(ini,fin);
	}

 }
