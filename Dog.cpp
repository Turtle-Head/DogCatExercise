// James Fehr
#include "Dog.h"
#include <iostream>

Dog::Dog(const std::string& breed, const std::string& name, int age):breed(breed), name(name), age(age){}

Dog::~Dog()
{
	std::cout << "\nThe Dog has been put to sleep\n";
}

void Dog::bark() const
{
	std::cout << "\nBark! Bark!! Bark!!!!\n";
}

std::string Dog::getName(const std::string& name) const
{
	return name;
}

void Dog::setName(const std::string& name)
{
	this->name = name;
}

std::string Dog::getBreed(const std::string& breed) const
{
	return breed;
}

void Dog::setBreed(const std::string& breed)
{
	this->breed = breed;
}

int Dog::getAge() const
{
	return age;
}

void Dog::getDoginfo() const
{
	std::cout << "\n " << breed << " : " << name << " " << age << "\n";
}













	
