#ifndef AHORCADO_H_
#define AHORCADO_H_

#include "Vector.h"
#include <string>
#include "Interfaz.h"

namespace avengers {

class Ahorcado {
private:
	int maximoDeRespuestasIncorrectas;
	int respuestasIncorrectas;
	Vector* palabraOculta;
	Vector* palabraConocida;
	Vector* letrasIncorrectas;
	bool perdiTodosMisChances();
	void adivinar(char letra);
public:
	Ahorcado(std::string palabra, int maximoDeRespuestasIncorrectas);
	bool esGanador();
	bool estaFinalizado();
	void perderUnChance(char letra);
	void jugar();
	~Ahorcado();
};

}

#endif
