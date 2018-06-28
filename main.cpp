/*****************************************************************************
* Name: main.cpp (compiles as fd)
* Author: Zach Colbert
* Date: 27 June 2018
* Description: The fd program takes an integer argument from the command line,
	calculates the factorial of that integer, then finds the UNIX Epoch
	date based on that factorial in local time.
*****************************************************************************/

/* INCLUDES */
#include <ctime>
#include <iostream>
#include "factorial.hpp"

/* MAIN FUNCTION */
int main (int argc, char* argv[]) {
	// CLI validation
	if (argc != 2) {
		std::cerr << "Syntax: fd <int>" << std::endl;
		return 1;
	}

	// Debug
	// std::cout << argv[0] << std::endl;

	// Convert the input to int
	int n = std::atoi(argv[1]);

	// Debug
	// std::cout << "Char: " << argv[1];
	// std::cout << ", Int: " << n << std::endl;

	// Get a factorial
	int fact = factorial(n);

	// Debug
	//std::cout << n << "! = " << fact << std::endl;

	// Convert factorial to time
	time_t fact_t = fact;

	// Debug
	// std::cout << "TIME_T: " << fact_t << std::endl;

	// Convert time to string
	char* result = ctime(&fact_t);

	// Print the result
	std::cout << result << std::endl;

	return 0;
}
