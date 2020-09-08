#pragma once
#include <string>
#include "Persona1.hpp"
class Maestro1 : public Persona1 {
 string NumeroTalentoHumano;
 double Salario;
 public:
 Maestro1(string Nombre, string Apellido,
 string NumeroTalentoHumano, double Salario);
 string obtenerNumero();
 virtual double ingresos() const override;
 virtual void imprimir() const override;
};
