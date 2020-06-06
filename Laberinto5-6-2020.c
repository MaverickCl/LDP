#include<stdio.h>
#include<windows.h>
#include <conio.h>
#include <stdlib.h>
//Tecla Arriba 72
//Tecla Abajo 80
//Tecla Izquierda 75
//Tecla Derecha 77
int f=5;
int c=5;
int i;
int j;



int main(){
	int Mapa[f][c];
	do
	juego(Mapa);
	while ();
		return 0;
		
}





void juego(int Mapa[][c]){
	srand(time(NULL));//para que cada vez se llene de manera diferente
	
	for( i=0; i<f; i++){
		for( j=0; j<c;j++){
			//para que en la coordenada 0.0 aparesca un 3
			if(i== 0 && j == 0){
                Mapa[i][j] = 3;
                
            }else{
            //llenado de matriz de forma "aleatoria"
            int numeroRandom = rand()%2;
            Mapa[i][j] = numeroRandom;
            }
            //para que aparesca un 9 en la coordenada 4.4
            if(i==4 && j==4){
                	Mapa[i][j] = 9;
				}
		}
}
    //mostrarMatriz
	for(i=0; i<f; i++){
		printf("\n \n \n");
		for(j=0; j<f; j++){
			
			printf("    %d     ",Mapa[i][j]);
			
		}
	}
	
}


