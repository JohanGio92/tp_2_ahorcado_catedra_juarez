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
	void writeVector(Vector& vector);
	void imprimirCaracter(char letra);
	void pedirLetraSiguiente();
	char readChar();
	void writeln(std::string mensaje);
	~Interfaz();
};

}

#endif
