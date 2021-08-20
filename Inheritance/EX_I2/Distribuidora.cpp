/* Topic: Inheritance
   Created by: yepedraza*/

#include "Distribuidora.h"

Distribuidora::Distribuidora()
{

	ValImp = 0;

}

Distribuidora::Distribuidora(double pValImp)
{

	ValImp = pValImp;

}

Distribuidora::~Distribuidora()
{
}

void Distribuidora::setVAL(double pValImp)
{

	ValImp = pValImp;

}

double Distribuidora::getVAL()
{

	return ValImp;

}

double Distribuidora::PorcetPerdiDuraz(double KgDesechos, double CantKgDis)
{
	double PorDur = 0;

	PorDur = (KgDesechos * 100) / CantKgDis;

	return PorDur;
}

double Distribuidora::PorcetPerdiManz(double KgDesechos, double CantKgDis)
{
	double PorMan = 0;

	PorMan = (KgDesechos * 100) / CantKgDis;

	return PorMan;
}

double Distribuidora::ValorImpImpor(double impuesto, double CantKgDis)
{
	double total = 0;

	total = impuesto * CantKgDis;

	return total;
}
