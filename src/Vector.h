#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>

namespace avengers {

class Vector {
private:
	int longitud;
	char* dato;
	std::string palabra;
public:
	Vector(std::string palabra);
	int obtenerLongitud();
	char* devolverDato();
	bool comparar(char letra);
	~Vector();
};

}

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
		if(palabra[i] == letra){
			dato[i] = letra;
			ok = true:
		}
	}
	return ok;
}

avengers::Vector::~Vector() {
	delete[] dato;
}

#endif


