#pragma once
#include <deque>
using namespace std;
template < typename TIPO >
class Pila {
public:
	TIPO& arriba() { return pila.front(); }
	void insertar(const TIPO& empujarValor) { pila.push_front(empujarValor); }
	void extraer() { pila.pop_front(); }
	bool estaVacia() const { return pila.empty(); }
	size_t size() const { return pila.size(); }
private:
	deque< TIPO > pila;
};