#include <iostream>
#include "Maestro1.hpp"
#include "Persona1.hpp"
Maestro1::Maestro1(string Nombre, string Apellido,
 string NumeroTalentoHumano,
 double Salario) : Persona1(Nombre, Apellido) {
 this->NumeroTalentoHumano = NumeroTalentoHumano;
 this->Salario = Salario;
}
string Maestro1::obtenerNumero() { return NumeroTalentoHumano; }
double Maestro1::ingresos() const { return Salario; }
void Maestro1::imprimir() const {
 cout << "Empleado asalariado: ";
 Persona1::imprimir();
 cout << " | Salario: " << Salario << endl;
}
