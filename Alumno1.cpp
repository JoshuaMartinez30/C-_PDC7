#include <iostream>
#include "Alumno1.hpp"
#include "Persona1.hpp"
Alumno1::Alumno1(string Nombre, string Apellido,
 string NumeroCuenta,
 double Mesada) : Persona1(Nombre, Apellido) {
 this->NumeroCuenta = NumeroCuenta;
 this->Mesada = Mesada;
}
string Alumno1::obtenerNumero() { return NumeroCuenta; }
double Alumno1::ingresos() const { return Mesada; }
void Alumno1::imprimir() const {
 cout << "Alumno con mesada: ";
 Persona1::imprimir();
 cout << " | Mesada: " << Mesada << endl;
}
