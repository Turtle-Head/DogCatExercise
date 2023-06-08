// DogCat-Ex.cpp : This file contains the 'main' function. Program execution begins and ends there.
//	James Fehr

#include <iostream>
#include "Dog.h"
#include "Cat.h"

int main()
{
	Dog Fido("Chihuahua","Rascal", 10);
	Fido.getDoginfo();
	Fido.bark();
	Cat Newt("Samantha","Blue",4);
	Newt.getCatinfo();
	/*Newt.setColor("Rainbow");
	Newt.setName("Frisky");
	Newt.setAge(999);
	Newt.getCatinfo();*/
	Newt.meow();


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


