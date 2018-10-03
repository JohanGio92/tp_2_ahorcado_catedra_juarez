#include "Vector.h"

void avengers::Vector::rellenar(char relleno) {
	for (int i = 0; i < this->longitud; ++i) {
		palabra[i] = relleno;
	}
}

avengers::Vector::Vector(std::string palabra) {
	longitud = palabra.size();
	this->palabra = new char[longitud];
	std::strcpy(this->palabra, &palabra[0]);
}

avengers::Vector::Vector(int longitud, char relleno) {
	this->longitud = longitud;
	palabra = new char[longitud];
	rellenar(relleno);
}

avengers::Vector::Vector(const Vector& vector) {
	this->longitud = vector.longitud;
	this->palabra = vector.palabra;
}

int avengers::Vector::obtenerLongitud() {
	return this->longitud;
}

char* avengers::Vector::obtenerPalabra() {
	return this->palabra;
}

bool avengers::Vector::esIgual(char* palabra) {
	bool ok = true;
	int i = 0;
	while (ok && i < longitud) {
		ok = esIgual(this->palabra[i], palabra[i]);
		++i;
	}
	return ok;
}

bool avengers::Vector::esIgual(char unaLetra, char otraLetra) {
	return unaLetra == otraLetra;
}

bool avengers::Vector::contieneEsta(char letra) {
	bool ok = false;
	int i = 0;
	while (!ok && i < longitud) {
		ok = esIgual(this->palabra[i], letra);
		++i;
	}
	return ok;
}

void avengers::Vector::insertar(char letra, char* palabra) {
	for (int i = 0; i < longitud; ++i) {
		if (esIgual(this->palabra[i], letra)) {
			palabra[i] = letra;
		}
	}
}

void avengers::Vector::insertar(char letra, int posicion) {
	this->palabra[posicion] = letra;

}

void avengers::Vector::mostrarPalabra() {
	for (int i = 0; i < longitud; i++) {
		std::cout << palabra[i];
	}
	std::cout << std::endl;
}

avengers::Vector::~Vector() {
	delete[] palabra;
}

