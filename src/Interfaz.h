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

	void imprimirCaracter(char letra);
	void pedirLetraSiguiente();
	char readChar();
	template <class T>
	void writeln(T mensaje);
	std::string readString();
	void escribirAlFinalTurno(Vector* vectorOculto, Vector* vectorIncorrectas);
	~Interfaz();
private:
	void palabraMinuscula();
	bool verificacionChar(char entrada);
	bool verificacionMaximo(int maximo);

};

}

template<class T>
inline void avengers::Interfaz::writeln(T mensaje) {
	std::cout << mensaje;
}

#endif
