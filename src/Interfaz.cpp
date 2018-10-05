#include "Interfaz.h"
#include <locale>

namespace avengers {

Interfaz::Interfaz() {
}

void avengers::Interfaz::convertirEnMinuscula() {
	std::locale loc;
	for (std::string::size_type i = 0; i < this->primeraPalabra.length(); ++i)
		this->primeraPalabra[i] = tolower(this->primeraPalabra[i], loc);
}

bool avengers::Interfaz::esUnCaracter(char entrada) {

	return (int) entrada < 97 || (int) entrada > 122;
}

char avengers::Interfaz::leerCaracter() {
	char entrada = 'A';

	while (esUnCaracter(entrada)) {
		this->escribir("Adivina tu nombre: ");
		std::cin >> entrada;
		entrada = tolower(entrada);
	}
	return entrada;
}

void avengers::Interfaz::escribirAlFinalDelTurno(Vector* vectorOculto,
		Vector* vectorIncorrectas) {
	this->escribir(vectorOculto);
	this->escribir(vectorIncorrectas);
}

Interfaz::~Interfaz() {
}

}
