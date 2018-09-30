#include "Interfaz.h"

namespace avengers {

Interfaz::Interfaz() {
}

void Interfaz::writeln(std::string mensaje) {
	std::cout << mensaje << std::endl;
}

char Interfaz::TomarLetras() {
	char entrada;
	std::cout << "Por favor dame algo: " << std::endl;
	std::cin >> entrada;
	return entrada;
}

Interfaz::~Interfaz() {
}

}
