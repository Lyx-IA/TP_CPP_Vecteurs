#include "Vecteur3D.h"
#include <iostream>
#include <cstdlib>

int main() {
	//Initialisation et affichage des vecteurs
	Vecteur3D MonVecteur(12, -12, 10);
	MonVecteur.AfficheVecteur();
	Vecteur3D MonVecteur2(24, 13, -9);
	MonVecteur2.AfficheVecteur();

	std::cout << "Nombre de vecteur(s): " << Vecteur3D::nombre() << std::endl;


	system("pause");

	return 0;
}