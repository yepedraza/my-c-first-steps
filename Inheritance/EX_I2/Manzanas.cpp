/* Topic: Inheritance
   Created by: yepedraza*/

#include "Manzanas.h"

Manzanas::Manzanas()
{

	LugarDis = "";

}

Manzanas::Manzanas(string pLugarDis)
{

	LugarDis = pLugarDis;

}

Manzanas::~Manzanas()
{
}

void Manzanas::setLUGAR(string pLugarDis)
{

	LugarDis = pLugarDis;

}

string Manzanas::getLUGAR()
{

	return LugarDis;

}
