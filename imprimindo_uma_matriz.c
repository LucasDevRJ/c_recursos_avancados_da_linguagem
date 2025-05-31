#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	//Imprima a matriz de inteiros abaixo:
	int numeros[20][10];

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 10; j++) {
			numeros[i][j] = rand();
		}
	}

	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d\n", numeros[i][j]);
		}
	}
}