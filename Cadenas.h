#include "Pila.h"
#include <iostream>
#include <string>
using namespace std;
void cadenas() {
	Pila<string> stringPila;
	const int stringPilaTam = 10;
	cout << "\n--> Insertar elementos en stringPila\n";
	for (int i = 0; i < stringPilaTam; ++i) {
		string stringTemp = "C++" + to_string(i);
		stringPila.insertar(stringTemp);  cout << stringTemp << ' ';
	}
	cout << "\n<-- Extraer elementos de stringPila\n";
	while (!stringPila.estaVacia()) {
		cout << stringPila.arriba() << ' '; stringPila.extraer();
	}
}