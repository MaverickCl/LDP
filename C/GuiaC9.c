#include<stdio.h>
void main(){
	int num1;
	int num2;
	int num3;
	int num4;
	float media;
	
	printf("Escriba el primer numero para calcular la media\n");
	scanf("%i", & num1);
	printf("Escriba el segundo numero para calcular la media\n");
	scanf("%i", & num2);
	printf("Escriba el tercer numero para calcular la media\n");
	scanf("%i", & num3);
	printf("Escriba el cuarto numero para calcular la media\n");
	scanf("%i", & num4);
	
	media=(float)(num1+num2+num3+num4)/4;
	
	printf("La media es: %f", media);
	
}
