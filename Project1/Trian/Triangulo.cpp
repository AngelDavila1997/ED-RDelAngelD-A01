#include "Triangulo.h"

Triangulo::Triangulo()
{
}

Triangulo::Triangulo(double b, double al, double hip, double s, double c, double t, double a, double p) :
	Figura(a, p)
{
	base = b;
	altura = a;
	hipotenusa = hip;
	sen = s;
	csen = c;
	tan = t;
}

double Triangulo::GetBase()
{
	return base;
}

double Triangulo::GetAltura()
{
	return altura;
}

double Triangulo::GetHipotenusa()
{
	return hipotenusa;
}

double Triangulo::GetSen()
{
	return sen;
}

double Triangulo::GetCsen()
{
	return csen;
}

double Triangulo::GetTan()
{
	return tan;
}

void Triangulo::SetBase(double b)
{
	base = b;
}

void Triangulo::SetAltura(double a)
{
	altura = a;
}

void Triangulo::SetHipotenusa(double h)
{
	hipotenusa = h;
}

void Triangulo::SetSen(double s)
{
	sen = s;
}

void Triangulo::SetCsen(double c)
{
	csen = c;
}

void Triangulo::SetTan(double t)
{
	tan = t;
}


