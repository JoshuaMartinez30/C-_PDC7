#include <iostream>
#include "Persona1.hpp"
using namespace std;
Persona1::Persona1(string Nombre, string Apellido) {
 this->Nombre = Nombre;
 this->Apellido = Apellido;
}
string Persona1::obtenerNombre() {
 return Nombre;
}
void Persona1::imprimir() const {
 cout << Nombre << ' ' << Apellido;
}