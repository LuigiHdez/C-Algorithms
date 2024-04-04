// Importamos librerias necesarias
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Funcion que devuelve un numero aleatorio de 1 a 2 
int probabilidad(){    
	int x = 0;
	x = 1 + rand() % 2;
	return x;
}


int main(){

	// Inicializamos la semilla
	srand(time(NULL));

	// Declaramos variables
	int tiros=0;
	int cara=0, cruz=0;
	int resultado=0;
	float pCara=0, pCruz=0;

	// Solicitamos al usuario la cantidad de experimentos a realizar
	printf("Ingrese la cantidad de veces que desea lanzar la moneda: ");
	scanf("%d", &tiros);

	// Realizamos los experimentos
	for(int i = 0; i < tiros; i++){
		resultado=probabilidad();
		
		if(resultado == 1){
			cara++;
		}
		else{
			cruz++;
		}
	}

	// Calculamos la probabilidad de cada experimento
	pCara = (cara*100)/(float)tiros;
	pCruz = (cruz*100)/(float)tiros;

	// Mostramos los resultados 
	printf("\nEn el caso de que una moneda justa sea lanzada al aire %d veces: \n", tiros );
	printf("La probabilidad de que esta caiga cruz es de: %f%%\n", pCruz);
	printf("La probabilidad de que esta caiga cara es de: %f%%\n", pCara);
}