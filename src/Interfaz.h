#ifndef INTERFAZ_H_
#define INTERFAZ_H_

#include <string>
#include <iostream>
#include "Vector.h"

namespace avengers {

class Interfaz {
private:
	std::string primeraPalabra;
public:

	Interfaz();
	void writeVector(Vector* vector);
	void imprimirCaracter(char letra);
	void pedirLetraSiguiente();
	char readChar();
	void writeln(std::string mensaje);
	int readInt();
	std::string readString();
	void escribirAlFinalTurno(Vector* vectorOculto, Vector* vectorIncorrectas);
	~Interfaz();
private:
	void palabraMinuscula();
	bool verificacionChar(char entrada);
	bool verificacionMaximo(int maximo);

};

}

#endif
