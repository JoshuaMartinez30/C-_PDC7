#pragma once
#include <string>
#include "Persona1.hpp"
class Alumno1 : public Persona1 {
 string NumeroCuenta;
 double Mesada;
 public:
 Alumno1(string Nombre, string Apellido,
 string NumeroCuenta, double Mesada);
 string obtenerNumero();
 virtual double ingresos() const override;
 virtual void imprimir() const override;
};
