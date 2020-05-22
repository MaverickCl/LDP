 #include<stdio.h>
void main(){
float lado1;
float lado2;
float area;
float perimetro;
printf("ingrese un lado del rectangulo\n");
scanf("%f",& lado1);
printf("ingrese el otro lado del rectangulo\n");
scanf("%f",& lado2);
area= lado1*lado2;
perimetro=(lado1*2)+(lado2*2);
printf("El area es: %f", area);
printf("\n");
printf("El perimetro es: %f",perimetro);
}

