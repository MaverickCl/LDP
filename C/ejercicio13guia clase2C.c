 #include<stdio.h>
 #include <string.h>


void main(){
	char codigo[6];
	float precio;
	float cantidad;
	float descuento;
	float Piva;
	float total;
	float Pcantidad;
	float Pdescuento;
	
printf("ingrese el codigo del producto\n");
scanf("%s",& codigo);
if(strlen(codigo)<7 && strlen(codigo)>5){
	printf("ingrese el precio del producto\n");
    scanf("%d",& precio);
	printf("ingrese el descuento del producto\n");
    scanf("%d",& descuento);
    printf("ingrese la cantidad del producto\n");
    scanf("%d",& cantidad);
    Piva= (precio*0,19);
    Pcantidad=(precio*cantidad);
    Pdescuento= Pcantidad*(descuento/100);
    total=((Piva*cantidad)*(descuento/100));
    printf("---- los PEQUES ----");
    printf("codigo: %s           precio: %f",codigo,precio);
    printf("cantidad: %f         Precio total sin iva: %d",cantidad,Pcantidad);
    printf("el descuento es: %f %Precio con descuento: %f ",descuento,Pdescuento);
    printf("IVA 19%               Precio con iva: %f ",Piva);
    printf("Total es: ",total);


}
}

