#include <stdio.h>

// 1 min = 60 segundos
// 1 hora = 60 minutos

int main() {
	int tempo_segundos, horas, minutos, segundos;
	scanf("%d", &tempo_segundos);
	
	horas = (tempo_segundos / 60) / 60;
	minutos = (tempo_segundos / 60) % 60;
	tempo_segundos %= 60;
	
	printf("%d:%d:%d\n", horas, minutos, tempo_segundos);
	return 0;
}
