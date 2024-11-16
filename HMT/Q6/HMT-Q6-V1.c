/*---------------------------------------------------------------------------------- -//
// Projet Name 			: HMT-Q6-V1
// File Name 			: HMT-Q6-V1.c
// Creation Date 		: 16.11.24
// Modification Date	: 16.11.24
//
// Author 				: Henri Mott
//
// Version				: 0.0
//
// Description          : Programme qui répond à la question 6 du test
//
//----------------------------------------------------------------------------------*/
//-- standard library declaration --// 
#include <stdio.h>					// Standard lyb


//-- main programm --// 
void main()
{
	//-- Define declarations --//
#define NIBBLE4 0b1111000000000000	// adress or storage slot
#define NIBBLE3 0b0000111100000000	// adress or storage slot
#define NIBBLE2 0b0000000011110000	// adress or storage slot
#define NIBBLE1 0b0000000000001111	// adress or storage slot
// 
//-- variable declarations --//
	char voltage, current, power, resistor;

	//-- variable that are going to hold the values --//
	int voltge_holder, current_holder, power_holder, resistor_holder;

	uint32_t frame = 0b1111010110101010;

	//-- Storage of frame --// 
	voltge_holder = frame & NIBBLE4;
	// 
	voltage = voltge_holder >> 12;
	// move the voltage value over
	current_holder = frame & NIBBLE3;
	// store the value of current
	current = current_holder >> 8;
	// move the voltage current over
	power_holder = frame & NIBBLE2;
	// store the value of current
	power = power_holder >> 4;
	// move over the power value over
	resistor_holder = frame & NIBBLE1;
	// store the resistor value in the last slot

}
