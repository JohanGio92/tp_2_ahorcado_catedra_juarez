#ifndef GENERADORRANDOM_H_
#define GENERADORRANDOM_H_

#include <cassert>
#include <random>
#include <chrono>
typedef int Entero;

namespace avengers {

class GeneradorRandom {
public:
	GeneradorRandom();
	virtual Entero randomizar() = 0;
	virtual ~GeneradorRandom();
};

}

#endif
