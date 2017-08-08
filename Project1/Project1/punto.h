
#pragma once
#include <string>
using namespace std;
//Creacion de clase
class Punt {
	//Atributos privados
private:
	int x, y, z;
	string dim;
	//Atributos publicos(metodos y constructores)
public:
	Punt(int coorx, int coory, int coorz);
	Punt(int coorx, int coory);
	Punt();
	int GetX();
	int GetY();
	int GetZ();
	string GetDim();
	void SetX(int coorx);
	void SetY(int coory);
	void SetZ(int coorz);
	void SetDim(string dimension);
};
