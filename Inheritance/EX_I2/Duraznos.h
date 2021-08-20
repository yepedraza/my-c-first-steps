/* Topic: Inheritance
   Created by: yepedraza*/

#ifndef _DURAZNOS_H
#define _DURAZNOS_H

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Duraznos
{

	protected:

		string PaisOr;
		string tipo;
		double impuesto;

	public:

		Duraznos();

		Duraznos(string pPaisOr, string ptipo, double pimpuesto);

		~Duraznos();

		void setPAIS(string pPaisOr);
		void setTIPO(string ptipo);
		void setIMP(double pimpuesto);

		string getPAIS();
		string getTIPO();
		double getIMP();

};

#endif
