#include "circulo.h"

Circulo::Circulo() {

}
Circulo::Circulo(double r, double a, double p) :
	Figura(a, p)
{
	radio = r;
}

double Circulo::GetRadio()
{
	return radio;
}

void Circulo::SetRadio(double r)
{
	radio = r;
}
