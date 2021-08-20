/* Topic: Inheritance
   Created by: yepedraza*/

#include "Duraznos.h"

Duraznos::Duraznos()
{

	PaisOr = "";
	tipo = "";
	impuesto = 0;

}

Duraznos::Duraznos(string pPaisOr, string ptipo, double pimpuesto)
{

	PaisOr = pPaisOr;
	tipo = ptipo;
	impuesto = pimpuesto;

}

Duraznos::~Duraznos()
{
}

void Duraznos::setPAIS(string pPaisOr)
{

	PaisOr = pPaisOr;

}

void Duraznos::setTIPO(string ptipo)
{

	tipo = ptipo;

}

void Duraznos::setIMP(double pimpuesto)
{

	impuesto = pimpuesto;

}

string Duraznos::getPAIS()
{

	return PaisOr;

}

string Duraznos::getTIPO()
{

	return tipo;

}

double Duraznos::getIMP()
{

	return impuesto;

}
