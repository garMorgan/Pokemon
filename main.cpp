/*
 * main.cpp
 *
 *  Created on: Jan 26, 2015
 *      Author: Garbear
 */
#include <iostream>
#include "Dice.h"

using namespace std;

int main()
{
	Dice ptrDice;
	cout << "roll was " << ptrDice.roll() << endl;
	cout << "roll was " << ptrDice.roll20() << endl;
	cout << "roll was " << ptrDice.roll8() << endl;
	cout << "roll was " << ptrDice.roll2() << endl;
}





