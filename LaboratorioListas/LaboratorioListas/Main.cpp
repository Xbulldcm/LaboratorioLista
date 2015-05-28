/*
 * Main.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#include "stdafx.h"
#include "Elemento.h"
#include "Persona.h"
#include "ElementoInt.h"
#include "ElementoDouble.h"
#include "ElementoPersona.h"
#include "ElementoPersonaEdad.h"

#include "ElementoLista.h"
#include "ElementoListaInt.h"
#include "Lista.h"



using namespace std;

int main(int argc, char **argv) {

	srand(time(NULL));
	string s[30] = { "Diego", "Maria", "Juan", "Andres", "Pedro", "Luis",
		"Juana", "Siria", "Roberto", "Siria", "Sebastian", "Ricardo",
		"Aria", "Andrey", "Chris", "Jose", "Ana", "Tyler", "Alberto",
		"Carolina", "Catalina", "Leonardo", "Walter", "Helen", "Silvia",
		"Monse", "Camila", "Carlos", "Aracely", "Mario" };

	Lista l;
	
	for (int w = 0; w < 10; ++w) {
		Persona* p1 = new Persona(rand() % 1000, s[rand() % 30], rand() % 100);
		ElementoPersona *p11 = new ElementoPersona(p1);
		p11->posicion = w;
		l.insertarElemento(p11);
	}

	cout << "Lista Enteros" << endl;
	cout << endl;
	cout << l << endl;
	cout << endl;
	cout << "Cantidad de Elementos: " << l.cantidadElementos << endl;

	Persona* p2 = new Persona(rand() % 1000, "Pepito", rand() % 100);
	l.insertarInicio(new ElementoPersona(p2));

	cout << endl;
	cout << "Lista Enteros Insertando al Inicio" << endl;
	cout << endl;
	cout << l << endl;
	cout << endl;
	cout << "Cantidad de Elementos: " << l.cantidadElementos << endl;

	int poc = 4;
	l.eliminar(poc);

	cout << endl;
	cout << "Lista Enteros Eliminando la Posicion " << poc << endl;
	cout << endl;
	cout << l << endl;
	cout << endl;
	cout << "Cantidad de Elementos: " << l.cantidadElementos << endl;

	system("pause");
	return 0;

}

