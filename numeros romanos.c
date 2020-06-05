#include<stdio.h>
void main(){

	int numero;
	printf("Ingrese el numero a transformar a numero romano: ");
	scanf("\n%d",&numero);

	int restoMil,restoCentena,restoDecima,restoUnidades;

	
	
	if(numero>=1000 && numero<4000){
		int AuxNumero = (numero/1000)*1000;
		switch (AuxNumero%1000){
			case 0:
				restoMil = AuxNumero/1000;
				int i;
			
				for(i = 0; i < restoMil;i++){
					printf("M");
				}
				
				numero -= 1000*restoMil;
			}
	}
	 if(numero<1000){
		int AuxNumero = (numero/100)*100;
		int restoCentenaAux;
		switch (AuxNumero%100){
			case 0:
				restoCentena = AuxNumero/100;
				restoCentenaAux = restoCentena;
			if(restoCentena == 4){
					printf("CD");
					numero -= 100*restoCentenaAux;
					break;
					
				}else if(restoCentena == 9){
					printf("CM");
					numero -= 100*restoCentenaAux;
					break;	
				}
				if(restoCentena>=5){
					printf("D");
					restoCentena -= 5;						
				}
				if(restoCentena>=1){
					int i;
					for(i = 0; i < restoCentena;i++){
						printf("C");
					}
				}
				numero-=100*restoCentenaAux;
				break;
				}
			}
	if(numero<100){
		int AuxNumero = (numero/10)*10;
		switch (AuxNumero%10){
			case 0:
				restoDecima = AuxNumero/10;
				int restoDecimaAux = restoDecima;
				if(restoDecima == 4){
					printf("XI");
					break;
					numero -= 10*restoDecimaAux;
				}else if(restoDecima == 9){
					printf("XC");
					numero -= 10*restoDecimaAux;
					break;
				
				}
				if(restoDecima>=5){
					printf("I");
					restoDecima -= 5;						
				}
				if(restoDecima>=1){
					int i;
					for(i = 0; i < restoDecima;i++){
						printf("X");
					}
				}
				numero -= 10*restoDecimaAux;
				break;
				}
			}
	if(numero<10){
		int AuxNumero = (numero/1)*1;
		switch (AuxNumero%1){
			case 0:
				restoUnidades = AuxNumero/1;
				if(restoUnidades == 4){
					printf("IV");
					break;
				}
				if(restoUnidades==9){
					printf("IX");
					break;
				}	
				if(restoUnidades>=5){
					printf("V");
					restoUnidades -= 5;
						
				}
				if(restoUnidades>=1){
					int i;
					for(i = 0; i < restoUnidades;i++){
						printf("I");
					}
				}
				break;
				}
			}
			
		sleep(20);
	}
	
