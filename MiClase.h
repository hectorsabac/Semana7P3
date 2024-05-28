#include <iostream>
#include <string>
using namespace std;
class MiClase {
	string nombre;
public:
	MiClase(string nombre) { this->nombre = nombre; }
	string obtenerNombre() { return nombre; }
	friend ostream& operator << (ostream& out, const MiClase& mc);
};
ostream& operator << (ostream& out, const MiClase& mc) {
	return out << mc.nombre;
}