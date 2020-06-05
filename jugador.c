#include <stdio.h>
#include "demogorgon.h"

const int DEF_ANIMO_JUGADOR = 0;
const char DEF_NIVEL_CONFIANZA_JUGADOR = 'w';
const float DEF_FUERZA_PSIQUICA = -1.0F;

int main(){

	int animo = DEF_ANIMO_JUGADOR;
	comenzar_enfrentamiento();

	animo = recibir_animo();

	printf("Animo recibido: %i\n", animo);

	char confianza = DEF_NIVEL_CONFIANZA_JUGADOR;

	confianza = recibir_confianza();

	printf("Confianza recibida: %c\n", confianza);
return 0;
}