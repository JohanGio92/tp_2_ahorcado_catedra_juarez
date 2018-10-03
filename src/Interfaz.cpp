#include "Interfaz.h"
#include <locale>

namespace avengers {

Interfaz::Interfaz() {
}

void avengers::Interfaz::palabraMinuscula() {
	std::locale loc;
	for (std::string::size_type i = 0; i < this->primeraPalabra.length(); ++i)
		this->primeraPalabra[i] = tolower(this->primeraPalabra[i], loc);
}

//arreglar porque no me pide por consola un string
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
		this->writeln("Por favor Ingresa una Letra: ");
		std::cin >> entrada;
		entrada = tolower(entrada);
	}
	return entrada;
}

void avengers::Interfaz::escribirAlFinalTurno(Vector* vectorOculto,
		Vector* vectorIncorrectas) {
	this->writeln(vectorOculto);
	this->writeln(vectorIncorrectas);
}

Interfaz::~Interfaz() {
}

}
