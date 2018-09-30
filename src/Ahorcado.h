
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
public:
	Ahorcado(std::string palabra, int maximoDeRespuestasIncorrectas);
	bool esGanador();
	bool estaFinalizado();
	void aumentarIncorrecto();
	void jugar();
	virtual ~Ahorcado();
};

}

#endif /* AHORCADO_H_ */
