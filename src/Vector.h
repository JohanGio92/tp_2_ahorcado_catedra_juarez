#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>
#include <cstring>
#include <iostream>
#include <ostream>

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
	void insertar(char letra, int posicion);
	char* obtenerPalabra();
	bool contieneEsta(char letra);

	bool esIgual(char* palabra);
	void mostrarPalabra();

	friend std::ostream& operator<<(std::ostream& salida, Vector* vector);

	~Vector();
private:
	void rellenar(char relleno);
	bool esIgual(char unaLetra, char otraLetra);
};

}

#endif
