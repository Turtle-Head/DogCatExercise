// James Fehr
#pragma once
#include <string>
class Dog
{
private:
	std::string breed;
	std::string name;
	int age;
public:
	Dog(const std::string& breed, const std::string& name, int age);	// Constructor
	~Dog();	// Deconstructor

	void bark() const;
	std::string getName(const std::string& name) const;
	void setName(const std::string& name);
	std::string getBreed(const std::string& breed) const;
	void setBreed(const std::string& breed);
	int getAge() const;
	void getDoginfo() const;
	
};

