#include "Pila.h"
#include <iostream>
void dobles() {
	Pila< double > doblePila;
	const int doblePilaTam = 5;
	double dobleValor = 1.1;
	cout << "\n--> Insertar elementos en doblePila\n";
	for (int i = 0; i < doblePilaTam; ++i) {
		doblePila.insertar(dobleValor);
		cout << dobleValor << ' '; dobleValor += 1.1;
	}
	cout << "\n<-- Extraer elementos de doblePila\n";
	while (!doblePila.estaVacia()) {
		cout << doblePila.arriba() << ' '; doblePila.extraer();
	}
}