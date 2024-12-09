/*---------------------------------------------------------------------------------- -//
// Projet Name 			: SolusQ6
// File Name 			: main.c
// Creation Date 		: 31.10.2024
// Modification Date	: 12.11.2024
//
// Author 				: (Benjamin Schafroth)
//
// Version				: 0.2
//
// Description          : correction test prog
//
// Remarks				: complet programm 
//----------------------------------------------------------------------------------*/
//-- preprocessor directive to delete warnings --//
#pragma warning(disable : 4996)		//-- the number corresponds at the warning linked with the scanf function 

//-- standard library declaration --// 
#include <stdio.h>					// for the Input-Ouput system 
#include <stdlib.h>					// to use the OS commands 

//-- personnal library declaration --// 


//-- main programm --// 
void main() {

	int valeur_tension, valeur_courant, valeur_puissance, valeur_resistance;

	int valeur_tension_intermediere, valeur_courant_intermediere, valeur_puissance_intermediere;

	uint32_t frame = 0b1111010110101010;

	valeur_tension_intermediere = frame & 0b1111000000000000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_tension = valeur_tension_intermediere >> 12;
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_courant_intermediere = frame & 0b0000111100000000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_courant = valeur_courant_intermediere >> 8;
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_puissance_intermediere = frame & 0b0000000011110000;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la tension)
	valeur_puissance = valeur_puissance_intermediere >> 4;
	//etant donné que nous avons une valeur beaucoup trop haute nous devons decaler la valeur en direction du LSB

	valeur_resistance = frame & 0b0000000000001111;
	// on isole les bits qui nous interesse (dans ce cas pour la valeur de la resistance) et etant donné que nous sommes deja au LSB nous n'avons pas a faire de decalage
}
