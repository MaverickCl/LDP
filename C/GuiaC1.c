 #include<stdio.h>
void main(){
	float precio;
	float descuento;
	float Pdescuento;
	printf("Escriba el precio del producto\n");
	scanf("%f",& precio);
	printf("escriba el descuento del producto\n");
	scanf("%f",& descuento);
	Pdescuento=precio*((100-descuento)/100);
	printf("El precio final es: %f ",Pdescuento);
	
	
}

