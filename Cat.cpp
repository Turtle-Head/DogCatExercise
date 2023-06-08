// James Fehr
#include <iostream>
#include "Cat.h"

Cat::Cat(const std::string& name, const std::string& color, int age):name(name),color(color),age(age){}

Cat::~Cat()
{
	std::cout << "\nThe cat has been put to sleep.\n";
}
void Cat::meow()
{
	std::cout << "\n Meow..meowwwwww...meowrg\n";
}
void Cat::setName(const std::string& name)
{
	this->name = name;
}
std::string Cat::getName(const std::string& name) const
{
	return name;
}
void Cat::setColor(const std::string& color)
{
	this->color = color;
}
std::string Cat::getColor(const std::string& color) const
{
	return color;
}
void Cat::setAge(int age)
{
	this->age = age;
}
int Cat::getAge() const
{
	return age;
}
void Cat::getCatinfo() const
{
	std::cout << "\n " << name << " : " << color << " : " << age << "\n";
}
