#include "pila.h"
#include "miClase.h"
void miClases() {
	Pila < MiClase > mcPila; const int mcPilaTam = 10;
	cout << "\n--> Insertar elementos en mcPila\n";
	for (int i = 0; i < mcPilaTam; ++i) {
		string stringTemp = "MC" + to_string(i);
		MiClase mcTemp(stringTemp);
		mcPila.insertar(mcTemp); cout << stringTemp << ' ';
	}
	cout << "\n<-- Extraer elementos de mcPila\n";
	while (!mcPila.estaVacia()) {
		cout << mcPila.arriba() << ' '; mcPila.extraer();
	}
}