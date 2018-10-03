#include "Interfaz.h"
#include <locale>

namespace avengers {

Interfaz::Interfaz() {
}

void avengers::Interfaz::writeln(std::string mensaje) {
	std::cout << mensaje << std::endl;
}

void avengers::Interfaz::palabraMinuscula() {
	std::locale loc;
	for (std::string::size_type i = 0; i < this->primeraPalabra.length(); ++i)
		this->primeraPalabra[i] = tolower(this->primeraPalabra[i], loc);
}

std::string avengers::Interfaz::readString() {
	std::cin.ignore();
	std::cout << "Por favor Ingresa la palabra a adivinar: " << std::endl;
	std::getline(std::cin, this->primeraPalabra);
	palabraMinuscula();

	return this->primeraPalabra;
}

bool avengers::Interfaz::verificacionChar(char entrada) {

	return (int) entrada < 97 || (int) entrada > 122;
}

char avengers::Interfaz::readChar() {
	char entrada = 'A';

	while (verificacionChar(entrada)) {

		std::cout << "Por favor Ingresa una Letra: " << std::endl;
		std::cin >> entrada;
		entrada = tolower(entrada);

	}
	return entrada;
}

bool avengers::Interfaz::verificacionMaximo(int maximo) {
	return maximo < 3 || maximo > 10;
}

int avengers::Interfaz::readInt() {
	int maximo = 0;
	while (verificacionMaximo(maximo)) {
		std::cout << "ingresa maximo intentos: " << std::endl;
		std::cin >> maximo;

	}

	return maximo;
}

void avengers::Interfaz::escribirAlFinalTurno(Vector* vectorOculto,
		Vector* vectorIncorrectas) {
	writeVector(vectorOculto);
	writeVector(vectorIncorrectas);
}
void avengers::Interfaz::writeVector(Vector* vector) {

	for (int i = 0; i < vector->obtenerLongitud(); i++) {
		std::cout << vector->obtenerPalabra()[i];
	}
	std::cout << std::endl;

}

Interfaz::~Interfaz() {
}

}
