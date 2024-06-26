#include <iostream>
#include "Dobles.h"
#include "Enteros.h"
#include "Cadenas.h"
#include "miClases.h"
#include <iomanip>
using namespace std;
template <class X>
X intercambiar(X& a, X& b) {
    X tp = a;
    cout << a << ", " << b;
    a = b;
    b = tp;
    cout << " => " << a << ", " << b << endl;
    return a;
}
template <class X, class Y>
X intercambiar(X& a, Y& b) {
    X tp = a;
    cout << a << ", " << b;
    a = b;
    b = tp;
    cout << " => " << a << ", " << b << endl;
    return a;
}
void ejercicio1() {
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    intercambiar(a, b);
    intercambiar(c, d);
    intercambiar(d, a);
}
void ejercicio2() {
    dobles();
    enteros();
    cadenas();
    miClases();
}
void ejercicio3() {
    int i = 65;
    char c = 70;
    float f = 3.1416;
    cout << "i como char = " << static_cast<char>(i) << endl;
    cout << "c como int = " << static_cast<int>(c) << endl;
    cout << "f como int = " << static_cast<int>(f) << endl;
}
//#define SVD1
#ifdef SVD1
class B {};
class D : public B {};
class X {};

int main() {
    D* d = new D;
    B* b = static_cast<B*>(d); // Esto trabaja!
    X* x = static_cast<B*>(d); // ERROR - No compila
}
#endif
//#define SVD2
#ifdef SVD2
class B {};
class D : public B {};
#endif
//#define SVD3
#ifdef SVD3
class B {
public:
    virtual ~B(){};
};
class D : public B {};

int main(){
    B* b = new D;
    D* d = dynamic_cast<D*>(b); // Compila!
}
#endif
//#define OTROEJERCICIO
#ifdef OTROEJERCICIO
class B {
public:
    void fun1() {
        cout << "base-1\n";
    }
    virtual void fun2() {
        cout << "base-2\n";
    }
    virtual void fun3() {
        cout << "base-3\n";
    }
    virtual void fun4() {
        cout << "base-4\n";
    }
};
class D : public B{
public:
    void fun1() {
        cout << "derived-1\n";
    }
    void fun2() {
        cout << "derived-2\n";
    }
    void fun4(int x) {
        cout << "derived-4\n";
    }
};
int main() {
    B* p; D obj1; p = &obj1;
    p->fun1(); p->fun2(); p->fun3(); p->fun4(); /*p->fun4(5); <---- ERROR */ obj1.fun4(5);
}
#endif

class Persona {

};

void ejercicio4() {
    int i = 65; char c = 70; float f = 3.1416; Persona p; Persona* p2 = new Persona();
    cout << "tipo de nombre de int = " << typeid(int).name() << endl;
    cout << "tipo de nombre de i = " << typeid(i).name() << endl;
    cout << "tipo de nombre de char = " << typeid(char).name() << endl;
    cout << "tipo de nombre de c = " << typeid(c).name() << endl;
    cout << "tipo de nombre de float = " << typeid(float).name() << endl;
    cout << "tipo de nombre de f = " << typeid(f).name() << endl;
    cout << "tipo de nombre de Persona = " << typeid(Persona).name() << endl;
    cout << "tipo de nombre de p = " << typeid(p).name() << endl;
    cout << "tipo de nombre de p2 = " << typeid(p2).name() << endl;
}

class NT {
    string a, i, l;
public:
    friend ostream& operator<<(ostream& o, const NT& n);
    friend istream& operator>>(istream& i, NT& n);
};

ostream& operator<<(ostream& o, const NT& n) {
    o << "(" << n.a << ") " << n.i << "-" << n.l; return o;
}

istream& operator>>(istream& i, NT& n) {
    i.ignore(); //Ignora el inicio de parentesis
    i >> setw(3) >> n.a;
    i.ignore(2); // Ignora el cierre de parentesis y el espacio
    i >> setw(4) >> n.i; 
    i.ignore(); // Ignora el guion
    i >> setw(4) >> n.l; return i;
}

void ejercicio5() {
    NT t;
    cout << "Telefono en la forma (504) 3193-9169:" << endl;
    cin >> t; cout << "Telefono: " << t << endl;
}

class Fecha {
public:
    Fecha(int mes = 1, int dia = 1, int year = 1900) {
        this->mes = mes;
        this->dia = dia;
        this->year = year;
    }
    Fecha& operator++(int) {
        dia++;
        return *this;
    }
    Fecha operator--() {
        dia--;
        return *this;
    }
private:
    unsigned int dia, mes, year;
    friend int main();
};

int main() {
    Fecha fecha;
    fecha++;
    cout << fecha.dia << endl;
    --fecha;
    cout << fecha.dia << endl;
}