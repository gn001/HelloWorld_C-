// HelloWorld.cpp : Defines the entry point for the console application.
// I'll tidy it all up once I stop fucking around, so probably never.

#include "stdafx.h"
#include <iostream>


int main()
{
	std::cout << "Hello world! (Keep hitting enter!)" << std::endl; // It should ignore everything on the end of this line, right?
					
	/** 
	* cout and endl are part of the iostream library, cout is a console output command whereas
	* endl pretty much tells the compiler to ignore everything to the right of that line
	* hence endl meaning "end line". makes sense I suppose 
	**/

	std::cout << "Or not, whatever";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	std::cout << "I'm just fucking around at this point";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	std::cout << "No point learning how to write C++ if you can't have fun with it right?";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	std::cout << "I'm not a programmer, so stop programming at me!";
	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
					// mo
					// comments
					// mo
					// money
					// bitch
					/** This is also a kind of
					Comment used for multiple lines.
					This shit is useful for if you want
					to shitcomment all over you program **/
					/**
					* However if you want to shitcomment
					* Beautifully you'd use an asterisk
					* on each line as it makes it easier to read
					* I'm not entirely sure how but I'm sure I'll
					* figure out why in time, or not, I dont know **/
					/**
					* Comments also kind of nest...
					* Kind of... it's a little weird
					* I suppose you'd just have to be
					careful with your shitcommenting **/
	return 0;
}