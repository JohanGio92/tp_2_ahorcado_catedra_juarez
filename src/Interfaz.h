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
	char leerCaracter();
	template <class T>
	void escribir(T mensaje);
	void escribirAlFinalDelTurno(Vector* vectorOculto, Vector* vectorIncorrectas);
	~Interfaz();
private:
	void convertirEnMinuscula();
	bool esUnCaracter(char entrada);
};

}

template<class T>
inline void avengers::Interfaz::escribir(T mensaje) {
	std::cout << mensaje;
}

#endif
