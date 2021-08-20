/* Topic: Inheritance
   Created by: yepedraza*/

#include "Manzanas.h"
#include "Duraznos.h"
#include "Frutas.h"
#include "Distribuidora.h"
#include <fstream>

struct Distri
{
	// Manzanas
	string LugarDis;

	// Duraznos
	string PaisOr;
	string tipo;
	double impuesto;

	// Frutas
	double CantKgDis;
	int PromKg;
	double KgDesechos;

	// Distribuidora
	double ValImp;

	// Porcentajes
	double PorMan;
	double PorDur;

};

void IngresarManzanas(Distri Dis[100]);
void IngresarDuraznos(Distri Dis[100]);
void ConsultarDatos(Distri Dis[100]);

double x = 0, y = 0, z = 0; //Variables para guardar los porcentajes (por si acaso)

int main()
{
	system("color E");

	Distri Dis[100];

	string salir;
	int opcion;

	do{
		system("cls");

		cout << "\t\t\t----DISTRIBUIDORA DE FRUTAS----" << endl << endl;

		cout << "Seleccione una opcion: " << endl;

		cout << "Opcion 1. Realizar un registro de Manzanas. " << endl;
		cout << "Opcion 2. Realizar un registro de Duraznos. " << endl;
		cout << "Opcion 3. Consultar todos lo registros. " << endl << endl;

		cout << "==> ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			system("cls");

			cout << "\t\t\t----REGISTRO DE MANZANAS----" << endl << endl;
			IngresarManzanas(Dis);

			break;

		case 2:
			system("cls");

			cout << "\t\t\t----REGISTRO DE DURAZNOS----" << endl << endl;
			IngresarDuraznos(Dis);

			break;

		case 3:
			system("cls");

			cout << "\t\t\t----CONSULTA DE DATOS----" << endl << endl;
			ConsultarDatos(Dis);

			break;

		default:
			system("cls");

			cout << "xxxx OPCION NO VALIDA xxxx" << endl;

			break;

		}

		cout << endl;
		cout << "Desea seguir realizando operaciones? (Si-No)" << endl << endl;
		cin >> salir;


	} while (salir == "si" && "SI" && "Si");


	cout << endl;
	system("pause");
	return 0;
}

void IngresarManzanas(Distri Dis[100])
{
	ofstream Ingreso("Manzanas.txt", ios::app);

	int regis;

	cout << "Numero de registros a realizar: ";
	cin >> regis;

	for (int i = 0; i < regis; i++)
	{
		system("cls");

		cout << "\t\t\t----REGISTRO DE MANZANAS----" << endl << endl;

		cout << "Ingrese el lugar de distribucion: " << endl;
		cin >> Dis[i].LugarDis;
		Ingreso << Dis[i].LugarDis << endl;

		cout << "Ingrese el costo promedio por kilo: " << endl;
		cin >> Dis[i].PromKg;
		Ingreso << Dis[i].PromKg << endl;

		cout << "Ingrese la cantidad de kilos a distribuir:" << endl;
		cin >> Dis[i].CantKgDis;
		Ingreso <<  Dis[i].CantKgDis << endl;

		cout << "Ingrese la cantidad de kilos que se desechan: " << endl;
		cin >> Dis[i].KgDesechos;
		Ingreso << Dis[i].KgDesechos << endl;

		Frutas ObjFruta(Dis[i].PaisOr, Dis[i].tipo, Dis[i].impuesto, Dis[i].LugarDis, Dis[i].CantKgDis, Dis[i].PromKg, Dis[i].KgDesechos);
		Distribuidora ObjDistribuidora(Dis[i].ValImp);

		ObjDistribuidora.PorcetPerdiManz(Dis[i].KgDesechos, Dis[i].CantKgDis);

		x = ObjDistribuidora.PorcetPerdiManz(Dis[i].KgDesechos, Dis[i].CantKgDis);

		Dis[i].PorMan = x;

	}
	Ingreso.close();

}

void IngresarDuraznos(Distri Dis[100])
{
	ofstream Ingreso2("Duraznos.txt", ios::app);

	int regis;

	cout << "Numero de registros a realizar: ";
	cin >> regis;

	for (int i = 0; i < regis; i++)
	{
		system("cls");

		cout << "\t\t\t----REGISTRO DE DURAZNOS----" << endl << endl;

		cout << "Ingrese el pais de origen: " << endl;
		cin >> Dis[i].PaisOr;
		Ingreso2 << Dis[i].PaisOr << endl;

		cout << "Ingrese el tipo de fruta (Nacional-Importada): " << endl;
		cin >> Dis[i].tipo;
		Ingreso2 << Dis[i].tipo << endl;

		cout << "Ingrese la cantidad de kilos a distribuir:" << endl;
		cin >> Dis[i].CantKgDis;
		Ingreso2 << Dis[i].CantKgDis << endl;

		cout << "Ingrese el costo promedio por kilo: " << endl;
		cin >> Dis[i].PromKg;
		Ingreso2 << Dis[i].PromKg << endl;

		cout << "Ingrese el impuesto de importacion: " << endl;
		cin >> Dis[i].impuesto;
		Ingreso2 << Dis[i].impuesto << endl;

		cout << "Ingrese la cantidad de kilos que se desechan: " << endl;
		cin >> Dis[i].KgDesechos;
		Ingreso2 << Dis[i].KgDesechos << endl;

		Frutas ObjFruta(Dis[i].PaisOr, Dis[i].tipo, Dis[i].impuesto, Dis[i].LugarDis, Dis[i].CantKgDis, Dis[i].PromKg, Dis[i].KgDesechos);
		Distribuidora ObjDistribuidora(Dis[i].ValImp);

		ObjDistribuidora.PorcetPerdiDuraz(Dis[i].KgDesechos, Dis[i].CantKgDis);

		y = ObjDistribuidora.PorcetPerdiDuraz(Dis[i].KgDesechos, Dis[i].CantKgDis);

		Dis[i].PorDur = y;

		ObjDistribuidora.ValorImpImpor(Dis[i].impuesto, Dis[i].CantKgDis);

		z = ObjDistribuidora.ValorImpImpor(Dis[i].impuesto, Dis[i].CantKgDis);

		Dis[i].ValImp = z;

	}
	Ingreso2.close();

}

void ConsultarDatos(Distri Dis[100])
{
	ifstream Consultar("Manzanas.txt");

	int regis1 = 0, regis2 = 0;

	cout << "Numero de registros de manzanas a consultar: " << endl << endl;
	cin >> regis1;

	for (int i = 0; i < regis1; i++)
	{
		system("cls");

		cout << "\t\t\t----CONSULTA DE DATOS----" << endl << endl;

		cout << "Lugar de distribucion: ";
		Consultar >> Dis[i].LugarDis;
		cout << Dis[i].LugarDis << endl << endl;

		cout << "Costo promedio por kilo: ";
		Consultar >> Dis[i].PromKg;
		cout << Dis[i].PromKg << endl;

		cout << "Cantidad de kilos a distribuir:";
		Consultar >> Dis[i].CantKgDis;
		cout << Dis[i].CantKgDis << endl;

		cout << "Cantidad de kilos que se desechan: ";
		Consultar >> Dis[i].KgDesechos;
		cout << Dis[i].KgDesechos << endl << endl;

		cout << "Porcentaje de margen de perdida: ";
		Consultar >> Dis[i].PorMan;
		cout << Dis[i].PorMan << endl;

		if (Dis[i].PorMan < 7.2)
		{
			cout << "Esta dentro del margen de perdida..." << endl;
		}
		else
		{
			cout << "Esta fuera del margen de perdida..." << endl;
		}

		system("pause");
	}

	ifstream Consultar2("Duraznos.txt");

	cout << "Numero de registros de duraznos a consultar: ";
	cin >> regis2;

	for (int i = 0; i < regis2; i++)
	{
		system("cls");

		cout << "\t\t\t----CONSULTA DE DATOS----" << endl << endl;

		cout << "Pais de origen: ";
		Consultar2 >> Dis[i].PaisOr;
		cout << Dis[i].PaisOr << endl;

		cout << "Tipo de fruta (Nacional-Importada): ";
		Consultar2 >> Dis[i].tipo;
		cout << Dis[i].tipo << endl << endl;

		cout << "Cantidad de kilos a distribuir:";
		Consultar2 >> Dis[i].CantKgDis;
		cout << Dis[i].CantKgDis << endl;

		cout << "Costo promedio por kilo: ";
		Consultar2 >> Dis[i].PromKg;
		cout << Dis[i].PromKg << endl;

		cout << "Cantidad de kilos que se desechan: ";
		Consultar2 >> Dis[i].KgDesechos;
		cout << Dis[i].KgDesechos << endl << endl;

		cout << "Impuesto de importacion: ";
		Consultar2 >> Dis[i].impuesto;
		cout << Dis[i].impuesto << endl;

		cout << "El valor total de importacion es: ";
		Consultar2 >> Dis[i].ValImp;
		cout << Dis[i].ValImp << endl << endl;

		cout << "Porcentaje de margen de perdida: ";
		Consultar2 >> Dis[i].PorDur;
		cout << Dis[i].PorDur << endl;

		if (Dis[i].PorDur < 5.5)
		{
			cout << "Esta dentro del margen de perdida..." << endl;
		}
		else
		{
			cout << "Esta fuera del margen de perdida..." << endl;
		}

		system("pause");

	}
}
