#include "Interfaz.h"

namespace avengers {

Interfaz::Interfaz() {
}

void Interfaz::writeln(std::string mensaje) {
	std::cout << mensaje << std::endl;
}

char Interfaz::readChar() {
	char entrada;
	std::cout << "Por favor Ingresa una Letra: " << std::endl;
	std::cin >> entrada;
	return entrada;
}

void Interfaz::writeVector(Vector& vector) {

}

Interfaz::~Interfaz() {
}

}
