#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>
#include <cmath>


///Assesseurs
float Vecteur3D::getX() {
	return nX;
}

float Vecteur3D::getY() {
	return nY;
}

float Vecteur3D::getZ() {
	return nZ;
}

///mutateurs
void Vecteur3D::setX(float nX) {
	this->nX = nX;
}

void Vecteur3D::setY(float nY) {
	this->nY = nY;
}

void Vecteur3D::setZ(float nZ) {
	this->nZ = nZ;
}

///methodes
void Vecteur3D::Init(float nX, float nY, float nZ) {
	this->nX = nX;
	this->nY = nY;
	this->nY = nZ;
	nNombre++;
}

void Vecteur3D::AfficheVecteur() {
	std::cout << "< " << this->getX() << ", " << this->getY() << ", " << this->getZ() << " >" << std::endl;
};

bool Vecteur3D::coincideValeur(Vecteur3D Vect) {
	if (this->nX == Vect.nX && this->nY == Vect.nY && this->nZ == Vect.nZ) {
		return true;
	}
	else {
		return false;
	}
}

bool Vecteur3D::coincideAdresse(Vecteur3D * Vect) {
	if (this->nX == Vect->nX && this->nY == Vect->nY && this->nZ == Vect->nZ) {
		return true;
	}
	else {
		return false;
	}
}

bool Vecteur3D::coincideReference(Vecteur3D &Vect) {
	if (this->nX == Vect.nX && this->nY == Vect.nY && this->nZ == Vect.nZ) {
		return true;
	}
	else {
		return false;
	}
}


int Vecteur3D::nombre()
{
	return nNombre;
}

///Constructeurs
Vecteur3D::Vecteur3D() {
	this->nX = 0;
	this->nY = 0;
	this->nZ = 0;
	nNombre++;
}



//Destructeur
Vecteur3D::~Vecteur3D() {
	//nNombre--;

}