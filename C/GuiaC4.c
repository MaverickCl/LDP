 #include<stdio.h>
void main(){
float radio;
float area;
float perimetro;
float pi=3.1416;
printf("Ingrese radio\n");
scanf("%f",& radio);
area=2*pi*radio;
perimetro=pi*(radio*radio);
printf("El area es: %f \n",area);
printf("El perimetro es: %f \n",perimetro);
}

