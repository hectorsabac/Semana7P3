#include <iostream>
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
int main() {
    int a = 10, b = 20;
    float c = 10.5, d = 20.5;
    intercambiar(a, b);
    intercambiar(c, d);
    intercambiar(d, a);
    return 0;
}