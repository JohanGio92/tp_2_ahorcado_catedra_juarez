#include "Ahorcado.h"

namespace avengers {

Ahorcado::Ahorcado(std::string palabra, int maximoDeRespuestasIncorrectas) {
	this->palabraConocida = new Vector(palabra);
	this->palabraOculta = new Vector((int)palabra.size(), '_');
	this->letrasIncorrectas = new Vector ( maximoDeRespuestasIncorrectas , '-' ) ;
	this->maximoDeRespuestasIncorrectas = maximoDeRespuestasIncorrectas;
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

void Ahorcado::jugar() {
	Interfaz interfaz;
	while(!estaFinalizado()){
		char letra = interfaz.readChar();
		adivinar(letra);
		interfaz.escribirAlFinalTurno(this->palabraOculta,this->letrasIncorrectas);

	}

	if(this->esGanador()){
		interfaz.writeln("Ganador");
	} else{
		interfaz.writeln("Perdedor");
	}

}

bool Ahorcado::perdiTodosMisChances() {
	return (respuestasIncorrectas == maximoDeRespuestasIncorrectas);
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
