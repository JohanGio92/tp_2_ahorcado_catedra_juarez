#include "Ahorcado.h"

namespace avengers {

const int Ahorcado::MAXIMO_RESPUESTAS_INCORRECTAS = 4;

Ahorcado::Ahorcado() {
	Interfaz interfaz;
	std::string palabra = interfaz.readString();
	this->palabraConocida = new Vector(palabra);
	this->palabraOculta = new Vector((int)palabra.size(), '_');
	this->letrasIncorrectas = new Vector ( MAXIMO_RESPUESTAS_INCORRECTAS , '-' ) ;
	respuestasIncorrectas = 0;
}

void Ahorcado::perderUnChance(char letra) {

	this->letrasIncorrectas->insertar(letra, this->respuestasIncorrectas ) ;
	++respuestasIncorrectas;

}

bool Ahorcado::esGanador() {
	return palabraOculta->esIgual(palabraConocida->obtenerPalabra());
}

void Ahorcado::adivinar(char letra) {
	if (palabraConocida->contieneEsta(letra)) {
		palabraConocida->insertar(letra, palabraOculta->obtenerPalabra());
	} else {
		this->perderUnChance(letra);
	}
}

void Ahorcado::mostrarResultados(Interfaz interfaz) {
	if (this->esGanador()) {
		interfaz.writeln("Ganador");
	} else {
		interfaz.writeln("Perdedor");
	}
}

void Ahorcado::jugar() {
	Interfaz interfaz;
	while(!estaFinalizado()){
		char letra = interfaz.readChar();
		adivinar(letra);
		interfaz.escribirAlFinalTurno(this->palabraOculta,this->letrasIncorrectas);
	}
	mostrarResultados(interfaz);
}

bool Ahorcado::perdiTodosMisChances() {
	return (respuestasIncorrectas == MAXIMO_RESPUESTAS_INCORRECTAS);
}

bool Ahorcado::estaFinalizado() {
	return esGanador() || perdiTodosMisChances();
}

Ahorcado::~Ahorcado() {
	delete palabraOculta;
	delete palabraConocida;
	delete letrasIncorrectas;
}

}
