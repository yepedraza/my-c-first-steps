/* Topic: Inheritance
   Created by: yepedraza*/

#ifndef _MANZANAS_H
#define _MANZANAS_H


#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Manzanas
{

	protected:

		string LugarDis;

	public:

		Manzanas();

		Manzanas(string pLugarDis);

		~Manzanas();

		void setLUGAR(string pLugarDis);

		string getLUGAR();

};

#endif
