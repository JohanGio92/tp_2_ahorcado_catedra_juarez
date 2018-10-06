#ifndef GENERADORDEPALABRASRANDOM_H_
#define GENERADORDEPALABRASRANDOM_H_

#include "GeneradorRandom.h"
#include <iostream>
#include <fstream>
#include <string>

namespace avengers {

class GeneradorDePalabrasRandom : public GeneradorRandom {
private:
	static const Entero LONGITUD;
	static const std::string NOMBRE_DEL_ARCHIVO;
	std::ifstream rutaDeEntrada;
	bool encontroLineaBuscada(Entero numeroDeLineas);
public:
	GeneradorDePalabrasRandom();
	Entero randomizar() override;
	std::string ejecutar();
	virtual ~GeneradorDePalabrasRandom();
};

}

#endif
