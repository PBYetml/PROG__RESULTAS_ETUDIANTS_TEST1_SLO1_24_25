/*---------------------------------------------------------------------------------- -//
// File Name 			: exercice 6.c
//
// Author 				: Benjamin Schafroth
//
// Version				: 0.1
//
// Description          : dcorrigé ex 6 test 
//						 
// Remarks				: 
//----------------------------------------------------------------------------------*/

//-- standart libraries --// 
#include <stdint.h>

//-- main programme -> entry point of the programm --//

int main() {
	
	int valeur_tension, valeur_courant, valeur_puissance, valeur_resistance;
	
	int valeur_tension_intermediere, valeur_courant_intermediere, valeur_puissance_intermediere;

	uint32_t frame = 0b11111111000000001111111100000000;

	valeur_tension_intermediere = frame & 0b11111111000000000000000000000000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_tension = valeur_tension_intermediere >> 24; // le 24 signifie le nombre de decalage a faire dans ce cas nous en faisons 24
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_courant_intermediere = frame & 0b00000000111111110000000000000000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_courant = valeur_courant_intermediere >> 16;
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_puissance_intermediere = frame & 0b00000000000000001111111100000000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_puissance = valeur_puissance_intermediere >> 8;
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_resistance = frame & 0b00000000000000000000000011111111;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la resistance) et etant donné que nous sommes deja au LSB nous n'avons pas a faire de decalage
}


