#include "GeneradorDePalabrasRandom.h"

namespace avengers {

const Entero GeneradorDePalabrasRandom::LONGITUD = 36;
const std::string GeneradorDePalabrasRandom::NOMBRE_DEL_ARCHIVO = "./src/ListaDePalabras.txt";

GeneradorDePalabrasRandom::GeneradorDePalabrasRandom() {
	this->rutaDeEntrada.open(NOMBRE_DEL_ARCHIVO);
	assert(rutaDeEntrada.is_open());
}

Entero GeneradorDePalabrasRandom::randomizar() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generador(seed);
	std::uniform_int_distribution<Entero> distribucion(0, LONGITUD);
	Entero random = distribucion(generador);
	return random;
}

bool GeneradorDePalabrasRandom::encontroLineaBuscada(
		Entero numeroDeLineas) {
	return numeroDeLineas == this->randomizar();
}

std::string GeneradorDePalabrasRandom::ejecutar() {
	std::string linea;
	Entero numeroDeLineas = 0;
	while (std::getline(rutaDeEntrada, linea) && !encontroLineaBuscada(numeroDeLineas)) {
		++numeroDeLineas;
	}
	rutaDeEntrada.seekg(0, rutaDeEntrada.beg);
	return linea;
}

GeneradorDePalabrasRandom::~GeneradorDePalabrasRandom() {
	rutaDeEntrada.close();
}

}
