#include "Ahorcado.h"

namespace avengers {

Ahorcado::Ahorcado(std::string palabra, int maximoDeRespuestasIncorrectas) {
	palabraOculta = new Vector(palabra);
	this->maximoDeRespuestasIncorrectas = maximoDeRespuestasIncorrectas;
	respuestasIncorrectas = 0;
}

void Ahorcado::aumentarIncorrecto() {
	++respuestasIncorrectas;
}

bool Ahorcado::esGanador() {
	return palabraOculta->comparar('_');
}

void Ahorcado::jugar() {
	Interfaz interfaz;
	while(estaFinalizado()){
		char letra = interfaz.TomarLetras();
		if (palabraOculta->comparar(letra)) {
			palabraOculta->insertar(letra);
		} else {
			this->aumentarIncorrecto();
		}
	}

	if(!this->esGanador()){
		interfaz.writeln("Ganador");
	} else{
		interfaz.writeln("Perdedor");
	}

}

bool Ahorcado::checkearRespuestas() {
	return (respuestasIncorrectas < maximoDeRespuestasIncorrectas);
}

bool Ahorcado::estaFinalizado() {
	return !esGanador() && checkearRespuestas();
}

Ahorcado::~Ahorcado() {
	delete palabraOculta;
}

}
