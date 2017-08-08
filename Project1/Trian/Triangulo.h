#pragma once
#include "Figura.h"
class Triangulo : public Figura {
private:
	double base;
	double altura;
	double hipotenusa;
	double sen;
	double csen;
	double tan;
public:
	Triangulo();
	Triangulo(double b, double al, double hip, double s, double cs, double t, double a, double p);
	double GetBase();
	double GetAltura();
	double GetHipotenusa();
	double GetSen();
	double GetCsen();
	double GetTan();
	void SetBase(double b);
	void SetAltura(double a);
	void SetHipotenusa(double h);
	void SetSen(double s);
	void SetCsen(double c);
	void SetTan(double t);
};
