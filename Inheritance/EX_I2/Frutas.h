/* Topic: Inheritance
   Created by: yepedraza*/

#ifndef _FRUTAS_H
#define _FRUTAS_H

#include "Duraznos.h"
#include "Manzanas.h"

class Frutas : public Duraznos, Manzanas
{

	private:

		double CantKgDis;
		int PromKg;
		double KgDesechos;

	public:

		Frutas();

		Frutas(string pPaisOr, string ptipo, int pimpuesto, string pLugarDis, double pCantKgDis, int pPromKg, double pKgDesechos);

		~Frutas();

		void setDIS(double pCantKgDis);
		void setPROM(int pPromKg);
		void setDESE(double pKgDesechos);

		double getDIS();
		int getPROM();
		double getDESE();

};

#endif
