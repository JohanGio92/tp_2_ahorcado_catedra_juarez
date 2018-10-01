#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>
#include <cstring>
#include <iostream>

namespace avengers {

class Vector {
private:
	int longitud;
	char* palabra;
public:
	Vector(std::string palabra);
	Vector(int longitud, char relleno);
	Vector(const Vector& vector);
	int obtenerLongitud();
	void insertar(char letra, char* palabra);
	char* obtenerPalabra();
	bool contieneEsta(char letra);
	bool esIgual(char* palabra);
	void mostrarPalabra();
	~Vector();
private:
	void rellenar(char relleno);
	bool esIgual(char unaLetra, char otraLetra);
};

}

#endif


