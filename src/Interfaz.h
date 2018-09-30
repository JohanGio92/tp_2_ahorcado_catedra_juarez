#ifndef INTERFAZ_H_
#define INTERFAZ_H_

#include <string>
#include <iostream>
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
	void writeln(std::string mensaje);
	~Interfaz();
};

}

#endif
