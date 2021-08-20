/* Topic: Inheritance
   Created by: yepedraza*/

#include "Frutas.h"

Frutas::Frutas() :Manzanas(), Duraznos()
{

	CantKgDis = 0;
	PromKg = 0;
	KgDesechos = 0;

}

Frutas::Frutas(string pPaisOr, string ptipo, int pimpuesto, string pLugarDis, double pCantKgDis, int pPromKg, double pKgDesechos)
	:Duraznos(pPaisOr, ptipo, pimpuesto), Manzanas(pLugarDis)
{

	CantKgDis = pCantKgDis;
	PromKg = pPromKg;
	KgDesechos = pKgDesechos;

}

Frutas::~Frutas()
{
}

void Frutas::setDIS(double pCantKgDis)
{

	CantKgDis = pCantKgDis;

}

void Frutas::setPROM(int pPromKg)
{

	PromKg = pPromKg;

}

void Frutas::setDESE(double pKgDesechos)
{

	KgDesechos = pKgDesechos;

}

double Frutas::getDIS()
{

	return CantKgDis;

}

int Frutas::getPROM()
{

	return PromKg;

}

double Frutas::getDESE()
{

	return KgDesechos;

}
