#ifndef VECTOR_H_
#define VECTOR_H_

#include <string>

namespace avengers {

template <class T>
class Vector {
private:
	int longitud;;
	T* dato;
public:
	Vector(std::string palabra);
	int obtenerLongitud();
	T* devolverDato();
	T comparar(char letra);
	~Vector();
};

}

template<class T>
avengers::Vector<T>::Vector(std::string palabra) {
	dato = new T[palabra.size()];
	for (int i = 0; i < palabra.size(); ++i) {
		dato[i] = palabra[i];
	}
	longitud = palabra.size();
}

template<class T>
inline int avengers::Vector<T>::obtenerLongitud() {
	return this->longitud;
}

template<class T>
T* avengers::Vector<T>::devolverDato() {
	return this->dato;
}

template<class T>
avengers::Vector<T>::~Vector() {
	delete[] dato;
}

#endif


