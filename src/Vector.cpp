#include "Vector.h"

namespace avengers {

void Vector::rellenar(char relleno) {
	for (int i = 0; i < this->longitud; ++i) {
		palabra[i] = relleno;
	}
}

Vector::Vector(std::string palabra) {
	longitud = palabra.size();
	this->palabra = new char[longitud];
	std::strcpy(this->palabra, &palabra[0]);
}

Vector::Vector(int longitud, char relleno) {
	this->longitud = longitud;
	palabra = new char[longitud];
	rellenar(relleno);
}

Vector::Vector(const Vector& vector) {
	this->longitud = vector.longitud;
	this->palabra = vector.palabra;
}

int Vector::obtenerLongitud() {
	return this->longitud;
}

char* Vector::obtenerPalabra() {
	return this->palabra;
}

bool Vector::esIgual(char* palabra) {
	bool ok = true;
	int i = 0;
	while (ok && i < longitud) {
		ok = esIgual(this->palabra[i], palabra[i]);
		++i;
	}
	return ok;
}

bool Vector::esIgual(char unaLetra, char otraLetra) {
	return unaLetra == otraLetra;
}

bool Vector::contieneEsta(char letra) {
	bool ok = false;
	int i = 0;
	while (!ok && i < longitud) {
		ok = esIgual(this->palabra[i], letra);
		++i;
	}
	return ok;
}

void Vector::insertar(char letra, char* palabra) {
	for (int i = 0; i < longitud; ++i) {
		if (esIgual(this->palabra[i], letra)) {
			palabra[i] = letra;
		}
	}
}

void Vector::insertar(char letra, int posicion) {
	this->palabra[posicion] = letra;

}

void Vector::mostrarPalabra() {
	for (int i = 0; i < longitud; i++) {
		std::cout << palabra[i];
	}
	std::cout << std::endl;
}


Vector::~Vector() {
	delete[] palabra;
}

std::ostream& operator<<(std::ostream& salida, Vector* vector) {
	for (int i = 0; i < vector->longitud; i++) {
		salida << vector->palabra[i];
	}
	salida << std::endl;
	return salida;
}

}

