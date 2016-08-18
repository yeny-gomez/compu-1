#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
	int x;
	float  y,resta,mult,resul,numero;
	
	printf("\n\nIngrese numero: ");
	 scanf("%f",&numero);
	
	y=numero/10;
	x=numero/10;
	
	printf("%i %f %f  \n", x,y,numero);
	
	resta=y-x;
	mult=resta*10;
	//resul=mult+resta;
	
	printf("\n\n %i %.0f ", x,mult );
	return 0;	
}










