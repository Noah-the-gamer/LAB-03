// lab3-nfulton2.cpp : This file contains the 'main' function. Program execution begins and ends there.
////////////////////////////////////////////////////////////////
//
//	Noah Fulton
//	
//	Lab 03 Overflow
//	The goal of this lab was to show exception handling needed
//	for overflow values and how to find them
////////////////////////////////////////////////////////////////

#include "pch.h"
#include <iostream>
#include <exception>

float factorial(long);
double factorialV2(long);
float mysterySum(int);

int main()
{
	//		check type short
	//declare variables
	short sum = 0;
	short num = 0;
	//loop until the sum is lower than the added num
	do
	{
		sum = 0;
		num++;
		for (int i = num; i > 0; i--)
		{
			sum += i;
		}

	} while (num <= sum);
	std::cout << num << " " << sum;
	
	
	//		check type long
	//declare variables
	long longSum = 0;
	long longNum = 0;
	//loop until the number overflows to the negatives
	do
	{
		longSum = 0;
		longNum++;
		for (int i = longNum; i > 0; i--)
		{
			longSum += i;
		}
	} while (longNum <= longSum);
	std::cout << std::endl << longNum << " " << longSum;
	



	//check factorial result

	
	long factorLong = 0;
	do
	{
		factorLong++;
	} while (factorial(factorLong) != INFINITY);
	std::cout << std::endl << factorLong;
	

	//check return double factorial
	
	long doubFact = 0;
	do
	{
		doubFact++;
	} while (factorialV2(doubFact) != INFINITY);
	std::cout << std::endl << doubFact;
	
	//strange floating point
	num = 0;
	do
	{
		num++;
	} while (mysterySum(num) != mysterySum(num + 1));
	std::cout << std::endl << num << "   " << mysterySum(num) << std::endl;

	//puzzle error?
	for (float i = 3.4; i < 4.4; i += 0.2)
	{
		std::cout << "i = " << i << std::endl;
	}

	//puzzle error v2
	for (double i = 3.4; i < 4.4; i += 0.2)
	{
		std::cout << "i = " << i << std::endl;
	}




}

//float check;
float factorial(long n)
{
//factorial the number
	float total = 1;
	for (long i = n; i >= 1; i--)
	{
		total = total * i;
	}
	return total;
}


//double factorial function

double factorialV2(long n)
{
	double total = 1;
	for (long i = n; i >= 1; i--)
	{
		total = total * i;
	}
	return total;
}

float mysterySum(int n)
{
	float total = 0;
	for (int i = n; i >= 1; i--)
	{
		total = total + (1 / i);
	}
	return total;
}