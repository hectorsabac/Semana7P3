#include "Pila.h"
#include <iostream>
void enteros() {
	Pila< int > intPila;
	const int intPilaTam = 10;
	int intValor = 1;
	cout << "\n--> Insertar elementos en intPila\n";
	for (int i = 0; i < intPilaTam; ++i) {
		intPila.insertar(intValor);
		cout << intValor++ << ' ';
	}
	cout << "\n<--Extraer elementos de intPila\n";
	while (!intPila.estaVacia()) {
		cout << intPila.arriba() << ' '; intPila.extraer();
	}
}