
#include "Punto.h"
//Definicion de constructores
Punt::Punt(int coorx, int coory, int coorz) {
	x = coorx;
	y = coory;
	z = coorz;
	dim = "tres dimensiones";
}
Punt::Punt(int coorx, int coory) {
	x = coorx;
	y = coory;
	z = NULL;
	dim = "dos dimensiones";
}
Punt::Punt() {
	x = NULL;
	y = NULL;
	z = NULL;
	dim = "sin dimensiones";
}
//Definicion de getters
int Punt::GetX()
{
	return x;
}

int Punt::GetY()
{
	return y;
}

int Punt::GetZ()
{
	return z;
}

string Punt::GetDim()
{
	return dim;
}
//Definicion de setters
void Punt::SetX(int coorx)
{
	x = coorx;
}

void Punt::SetY(int coory)
{
	y = coory;
}

void Punt::SetZ(int coorz)
{
	z = coorz;
}

void Punt::SetDim(string dimension)
{
	dim = dimension;
}
