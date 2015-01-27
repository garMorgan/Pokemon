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
	for(int i=0;i<5;i++)
	{
		cout << "roll was " << ptrDice.roll() << endl;
	}
}




