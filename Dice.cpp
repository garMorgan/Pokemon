/*
 * Dice.cpp
 *
 *  Created on: Jan 26, 2015
 *      Author: Garbear
 */
#include <iostream>
#include "Dice.h"

using namespace std;

Dice::Dice()
{
	m_numSides = 6;
	m_numSides20 = 20;
	m_numSides8 = 8;
	m_numSides2 = 2;
	/** initialize random seed: */
	srand (time(NULL));//Old C style NULL
}

Dice::Dice(int numSides)
{
	m_numSides = numSides;
	m_numSides20 = 20;
	m_numSides8 = 8;
	m_numSides2 = 2;
	/** initialize random seed: */
	srand (time(NULL));//Old C style NULL
}

//getting numsides for 6
int Dice::getNumSides()
{
	return(m_numSides);
}
//getting numsides for 20
int Dice::getNumSides20()
{
	return(m_numSides20);
}
//getting numsides for 8
int Dice::getNumSides8()
{
	return(m_numSides8);
}
//getting numsides for 2
int Dice::getNumSides2()
{
	return(m_numSides2);
}

int Dice::roll()
{
	/** Get back a pseudo-random number */
	return(rand()%m_numSides + 1);
}

int Dice::roll20()
{
	/** Get back a pseudo-random number */
	return(rand()%m_numSides20 + 1);
}

int Dice::roll8()
{
	/** Get back a pseudo-random number */
	return(rand()%m_numSides8 + 1);
}

int Dice::roll2()
{
	/** Get back a pseudo-random number */
	return(rand()%m_numSides2 + 1);
}
