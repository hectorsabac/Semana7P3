#pragma once
#include "Pila.h"
#include <iostream>
using namespace std;
void Dobles() {
	Pila< double > doblePila;
	const size_t doblePilaTam = 5;
	double dobleValor = 1.1;
	cout << "\n--> Insertar elemento den doblePila\n";
	for (size_t i = 0; i < doblePilaTam; ++i) {
		doblePila.insertar(dobleValor);
		cout << dobleValor << ' '; doblePila.extraer();
	}
}