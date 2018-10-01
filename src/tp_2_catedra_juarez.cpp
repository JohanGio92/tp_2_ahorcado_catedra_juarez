#include <iostream>
#include "Ahorcado.h"
using namespace std;
using namespace avengers;

int main() {
	avengers::Interfaz interfaz;
	avengers::Ahorcado ahorcado("auto", 4);
	ahorcado.jugar();
	return 0;
}
