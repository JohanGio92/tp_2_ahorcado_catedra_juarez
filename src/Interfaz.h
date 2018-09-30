#ifndef INTERFAZ_H_
#define INTERFAZ_H_

#include <string>
#include "Vector.h"

namespace avengers {

class Interfaz {
public:
	std::string primeraPalabra;
	Interfaz();
	void imprimirVector(Vector vector);
	void imprimirCaracter(char letra);
	void pedirLetraSiguiente();
	char TomarLetras();
	~Interfaz();
};

}

#endif
