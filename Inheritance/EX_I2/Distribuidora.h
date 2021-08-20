/* Topic: Inheritance
   Created by: yepedraza*/

#ifndef _DISTRIBUIDORA_H
#define _DISTRIBUIDORA_H

#include "Frutas.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Distribuidora
{

	private:

		double ValImp;


	public:

		Distribuidora();

		Distribuidora(double pValImp);

		~Distribuidora();

		void setVAL(double pValImp);

		double getVAL();

		double PorcetPerdiDuraz(double KgDesechos, double CantKgDis);
		double PorcetPerdiManz(double KgDesechos, double CantKgDis);
		double ValorImpImpor(double impuesto, double CantKgDis);

};

#endif
