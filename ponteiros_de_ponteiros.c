#include <stdio.h>

int main() {
	int numeros[5][10];

	int* linha0 = numeros[0];
	int* linha1 = numeros[1];
	int* linha2 = numeros[2];
	int* linha3 = numeros[3];
	int* linha4 = numeros[4];

	// os numeros serao iguais, afinal
	// ambos ponteiros apontam para o mesmo 
	// endereço de memória
	printf("%d %d", linha0, numeros[0]);

	int numeros[5][10];

	// o ponteiro copia é idêntico ao
	// ponteiro numeros... ambos apontam
	// para uma lista de ponteiros de inteiros
	int** copia = numeros;

	// as duas operações abaixo são idênticas
	numeros[0][0] = 10;
	copia[0][0] = 10;
}