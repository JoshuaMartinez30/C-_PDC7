#include <iostream>
#include "Persona1.cpp"
#include "Maestro1.cpp"
#include "Alumno1.cpp"
#include <vector>
using namespace std;
int main() {
 Maestro1 m("Martin", "Cuellar", "12345", 1500); m.imprimir();
 Alumno1 a("Gabriel", "Vasquez", "67890", 1000); a.imprimir();
 vector < Persona1 * > personas( 2 );
 personas[ 0 ] = dynamic_cast<Persona1*>(&m);
 personas[ 1 ] = dynamic_cast<Persona1*>(&a);
 for ( Persona1 *personaPtr : personas ) {
 cout << personaPtr->ingresos() << " -> ";
 personaPtr->imprimir();
 }
}