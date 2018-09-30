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
	void insertar(char letra);
	char* devolverDato();
	bool comparar(char letra);
	~Vector();
};

}

#endif


