#include "Vector.h"

avengers::Vector::Vector(std::string palabra) {
	this->palabra = palabra;
	dato = new char[palabra.size()]{'_'};
	longitud = palabra.size();
}

inline int avengers::Vector::obtenerLongitud() {
	return this->longitud;
}

char* avengers::Vector::devolverDato() {
	return this->dato;
}

bool avengers::Vector::comparar(char letra) {
	bool ok = false;
	for (int i = 0; i < longitud; ++i) {
		ok = palabra[i] == letra ? true: false;
	}
	return ok;
}

void avengers::Vector::insertar(char letra) {
	for (int i = 0; i < longitud; ++i) {
		if (palabra[i] == letra) {
			dato[i] = letra;
		}
	}
}

avengers::Vector::~Vector() {
	delete[] dato;
}

