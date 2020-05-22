#include<stdio.h>
#include <math.h>
void main(){
	//Aqui declaro variables
	
	float a;
	float b;
	float c;
	float Resultado1;
    float Resultado2;
    
	printf("Ingrese el coeficiente A\n");
	scanf("%f", & a);
	printf("Ingrese el coeficiente B\n");
	scanf("%f", & b);
	printf("Ingrese el coeficiente C\n");
	scanf("%f", & c); 
	
	Resultado1= (-b)+(sqrt((b*b)*-4*a*c))/(2*a);
	Resultado2= (-b)-(sqrt((b*b)*-4*a*c))/(2*a);
	
	printf("El resultado es: %f  o  %f ", Resultado1, Resultado2);

		
}
