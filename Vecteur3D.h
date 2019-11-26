#pragma once

#include <iostream>
#include <cstdlib>

class Vecteur3D {

private:

	float nX, nY, nZ;
	static int nNombre;

public:


	///Assesseurs
	float getX();
	float getY();
	float getZ();
	///Mutateurs
	void setX(float nX);
	void setY(float nY);
	void setZ(float nZ);

	///Methodes
	void Init(float nX, float nY, float nZ);
	void AfficheVecteur();

	bool coincideValeur(Vecteur3D Vect);
	bool coincideAdresse(Vecteur3D * Vect);
	bool coincideReference(Vecteur3D &Vect);

	static Vecteur3D normaxValeur(Vecteur3D Vect1, Vecteur3D Vect2);
	static Vecteur3D normaxAdresse(Vecteur3D * Vect1, Vecteur3D * Vect2);
	static Vecteur3D normaxReference(Vecteur3D &Vect1, Vecteur3D &Vect2);

	static int nombre();

	///constructeurs
	Vecteur3D();
	//Vecteur3D(float nX, float nY, float nZ);

	/*inline Vecteur3D(float nX, float nY, float nZ) {
		this->nX = nX;
		this->nY = nY;
		this->nZ = nZ;
		nNombre++;
	}*/

	Vecteur3D(float fltX, float fltY, float fltZ) {
		nX = fltX; nY = fltY; nZ = fltZ; nNombre++;
	}

	///desctructeur
	~Vecteur3D();
};