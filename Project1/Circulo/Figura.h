#pragma once

class Figura {
protected:
	double area;
	double perimetro;
public:
	Figura();
	Figura(double a, double p);
	double GetArea();
	double GetPerimetro();
	void SetArea(double a);
	void SetPerimetro(double p);
};
