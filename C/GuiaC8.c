#include<stdio.h>
void main(){
	float R1;
	float R2;
	float Req;
	
	printf("Escriba el valor de la primera resistencia\n");
	scanf("%f", & R1);
	printf("Escriba el valor de la segunda resistencia\n");
	scanf("%f", & R2);
	Req=(R1*R2)/(R1+R2);
	printf("El valor de la resistencia equivalente es: %f \n", Req);
}
