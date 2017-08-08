#include "Figura.h"

Figura::Figura()
{
	area = 0.0;
	perimetro = 0.0;
}
Figura::Figura(double a, double p)
{
	area = a;
	perimetro = p;
}
double Figura::GetArea()
{
	return area;
}

double Figura::GetPerimetro()
{
	return perimetro;
}

void Figura::SetArea(double a)
{
	area = a;
}

void Figura::SetPerimetro(double p)
{
	perimetro = p;
}
