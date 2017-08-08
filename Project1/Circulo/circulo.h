#pragma once
#include "Figura.h"
class Circulo : public Figura {
private:
	double radio;
public:
	Circulo();
	Circulo(double r, double a, double p);
	double GetRadio();
	void SetRadio(double r);
};
