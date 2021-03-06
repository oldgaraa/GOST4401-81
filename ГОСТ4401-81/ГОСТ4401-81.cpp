#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include "GOST4401-81.h"
using namespace std;

ofstream txtfile("Results.txt");

int main()
{
	setlocale(LC_ALL, "ru");
	Atm_GOST();
	for (;;) {
		cout << "Введите геометрическую высоту в километрах (не более 86 км)" << endl;
		double h;
		cin >> h; h *= 1E3;
		int i = findi(h);
		txtfile << setprecision(15)
			<< setw(7) << "h, м " << setw(20) << h << endl
			<< setw(7) << "H, м " << setw(20) << fH(h) << endl
			<< setw(7) << "T, K " << setw(20) << fT(h) << endl
			<< setw(7) << "p, Па " << setw(20) << fp(h) << endl
			<< setw(7) << "ro, кг/м3 " << setw(20) << fro(h) << endl
			<< setw(7) << "а, м/с " << setw(20) << fa(h) << endl
			<< setw(20) << "Mu, ??     " << setw(40) << fmu(h) << endl
			<< setw(20) << "tetta, ??     " << setw(40) << ftetta(h) << endl
			<< endl;

		cout << setprecision(15)
			<< setw(7) << "h, м" << setw(40) << h << endl
			<< setw(7) << "H, м" << setw(40) << fH(h) << endl
			<< setw(7) << "T, K" << setw(40) << fT(h) << endl
			<< setw(7) << "p, Па" << setw(40) << fp(h) << endl
			<< setw(7) << "ro, кг/м3" << setw(40) << fro(h) << endl
			<< setw(7) << "а, м/с" << setw(40) << fa(h) << endl
			<< setw(7) << "Mu, ??" << setw(40) << fmu(h) << endl
			<< setw(7) << "tetta, ??" << setw(40) << ftetta(h) << endl
			<< endl;
		cout << endl;
		system("pause");
		system("cls");
	}
	system("pause");
    return 0;
}

