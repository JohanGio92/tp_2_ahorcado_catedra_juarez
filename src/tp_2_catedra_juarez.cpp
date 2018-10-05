#include <iostream>
#include "Ahorcado.h"
#include "GeneradorDePalabrasRandom.h"
using namespace std;
using namespace avengers;

int main() {
	avengers::Ahorcado* ahorcado = new avengers::Ahorcado();
	ahorcado->jugar();
	delete ahorcado;
	return 0;
}
