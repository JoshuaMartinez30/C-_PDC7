#pragma once
#include <string>
using namespace std;
class Persona {
 public:
 //enum TipoGenero {MASCULINO, FEMENINO};
 enum TipoGenero {FEMENINO, MASCULINO};
 Persona(string Nombre, string Apellido, TipoGenero Genero);
 string obtenerNombre();
 TipoGenero obtenerGenero();
 private:
 string Nombre, Apellido;
 TipoGenero Genero;
};
