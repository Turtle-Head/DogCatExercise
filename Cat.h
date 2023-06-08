// James Fehr
#pragma once
#include <string>
class Cat
{
private:
	std::string name;
	std::string color;
	int age;
public:
	Cat(const std::string& name, const std::string& color, int age);	// Constructor
	~Cat();	// Deconstructor

	void meow();
	
	void setName(const std::string& name);
	std::string getName(const std::string& name) const;
	
	void setColor(const std::string& color);
	std::string getColor(const std::string& color) const;
	
	void setAge(int age);
	int getAge() const;
	
	void getCatinfo() const;
};

