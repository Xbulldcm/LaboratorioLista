/*
 * Main.cpp
 *
 *  Created on: 28/4/2015
 *      Author: ruben.jimenez
 */

#include "stdafx.h"
#include "ArbolBinario.h"
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

	ArbolBinario a;

	for (int i = 0; i < 10; ++i) {
		a.insertarElemento(new ElementoDouble(rand() % 100));
	}

	cout << "ArbolBinario de Doubles:" << endl;
	cout << endl;
	cout << a << endl;
	cout << endl;

	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	ArbolBinario b;

	string s[30] = { "Diego", "Maria", "Juan", "Andres", "Pedro", "Luis",
			"Juana", "Siria", "Roberto", "Siria", "Sebastian", "Ricardo",
			"Aria", "Andrey", "Chris", "Jose", "Ana", "Tyler", "Alberto",
			"Carolina", "Catalina", "Leonardo", "Walter", "Helen", "Silvia",
			"Monse", "Camila", "Carlos", "Aracely", "Mario" };

	for (int h = 0; h < 100; h++) {
		Persona* p1 = new Persona(rand() % 1000, s[rand() % 30], rand() % 100);
		b.insertarElemento(new ElementoPersona(p1));
	}

	cout << "ArbolBinario de IDs de Personas:" << endl;
	cout << endl;
	cout << b << endl;
	cout << endl;

	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	ArbolBinario c;

	for (int j = 0; j < 100; j++) {
		Persona* p1 = new Persona(rand() % 1000, s[rand() % 30], rand() % 100);
		c.insertarElemento(new ElementoPersonaEdad(p1));
	}

	cout << "ArbolBinario por Edad de Personas:" << endl;
	cout << endl;
	cout << c << endl;
	cout << endl;


	cout
			<< "-------------------------------------------------------------------"
			<< endl;
	cout << endl;

	Lista l;

	for (int w = 0; w < 10; ++w) {
		l.insertarElemento(new ElementoListaInt(rand() % 100));
	}

	cout << "Lista Enteros" << endl;
	cout << endl;
	cout << l << endl;
	cout << endl;

	system("pause");
	return 0;

}

