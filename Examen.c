//Basilio Figueroa Miguel Angel

#include <stdio.h>

int recursividad(int);

int ra=3;

int re;


int main()
	
{
	
	int i;
	
	int Ini=5;
	
	int Ele;
	
	printf("Ingrese el numero de la secuencia: ");
	
	scanf("%d",&Ele);  
	
	printf("\n");
	
	for(i=1; i<=Ele; i++)
		
	{
		
		printf("%d, ",Ini,recursividad(Ini));
		
		Ini=re;
		
	}
	
	return 0;
	
}

int recursividad(int Ini)
	
{
	
	
	if(Ini>0)
		
	{
		
		return resultado=Ini*ra;
		
	}
	
	else
	   
	{
		
		return 1;    
		
	}
	
}
