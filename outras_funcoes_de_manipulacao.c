#include <string.h>
#include <stdio.h>

struct contato {
    char nome[20];
    char email[50];
};

typedef struct contato CONTATO;

int main() {
    CONTATO mauricio;
    
    strcpy(mauricio.nome, "Mauricio Aniche");
    strcpy(mauricio.email, "mauricio.aniche@caelum.com.br");

    printf("Nome: %s\n", mauricio.nome);
    printf("E-mail: %s\n", mauricio.email);

    CONTATO aniche;

	memcpy(&aniche, &mauricio, sizeof(CONTATO));

	printf("-------|Dados Copiados|------\n");
	printf("Nome: %s\n", aniche.nome);
    printf("E-mail: %s", aniche.email);

    CONTATO marcelo;

	// 0 significa NULO
	memset(&marcelo, 0, sizeof(CONTATO));
}