/*
 * Dice.h
 *
 *  Created on: Jan 26, 2015
 *      Author: Garbear
 */

#ifndef DICE_H
#define DICE_H

#include <cstdio> /** NULL */
#include <cstdlib> /** srand(), rand() */
#include <ctime> /** time() */


class Dice
{
	public:
	/**
	*  @post Creates and initializes a Dice instance
	*  @return Initialzed Dice with 6 sides
	*/
	Dice();

	/**
	*  @pre numSides is 2 or greater
	*  @post Creates and initializes a Dice instance
	*  @return Initialzed Dice with m_numSides initialzed to numSides.
	*/
	Dice(int numSides);

	/**
	*  @post Creates and initializes a Dice instance
	*  @return a pseudo-random number from 1 up and including and m_numSides
	*/
	int roll();
	int roll20();
	int roll8();
	int roll2();

	/**
	*  return the value of m_numSides
	*/
	int getNumSides();
	int getNumSides20();
	int getNumSides8();
	int getNumSides2();

	private:
	int m_numSides;
	int m_numSides20;
	int m_numSides8;
	int m_numSides2;
};
#endif
