#ifndef AHORCADO_H_
#define AHORCADO_H_

#include "Vector.h"
#include <string>
#include "Interfaz.h"
#include "GeneradorDePalabrasRandom.h"

namespace avengers {

class Ahorcado {
private:
	static const int MAXIMO_RESPUESTAS_INCORRECTAS;
	int respuestasIncorrectas;
	Vector* palabraOculta;
	Vector* palabraConocida;
	Vector* letrasIncorrectas;
	bool perdiTodosMisChances();
	void adivinar(char letra);
	bool esGanador();
	bool estaFinalizado();
	void perderUnChance(char letra);
	void mostrarResultados(Interfaz interfaz);

public:
	Ahorcado();
	void jugar();
	~Ahorcado();
};

}

#endif
