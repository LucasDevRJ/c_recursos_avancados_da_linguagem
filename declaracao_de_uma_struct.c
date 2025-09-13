#include <stdio.h>

struct registro {
	char nome[50];
	char telefone[8];
};

int main() {
	struct registro r;

	snprintf(r.nome, sizeof(r.nome), "Lucas");
	snprintf(r.telefone, sizeof(r.telefone), "11111111");

	printf("Nome: %s\n", r.nome);
	printf("Telefone: %s\n", r.telefone);
}